#include "cashDialog.h"
#include <QtGui>


CashDialog::CashDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	total = 0.0;
	times = 1;

	ui.totalDoubleLabel->setText(QString::number(total));
	ui.okPushButton->setDefault(true);
	ui.okPushButton->setEnabled(false);
	ui.priceLineEdit->setText(tr("0"));
	ui.numLineEdit->setText(tr("0"));
}

CashDialog::~CashDialog()
{

}
void CashDialog::on_priceLineEdit_textChanged() {

	double p = ui.priceLineEdit->text().toDouble();
	double n = ui.numLineEdit->text().toDouble();
	if (p > 1e-3 && n > 1e-3)
		ui.okPushButton->setEnabled(true);
	else
		ui.okPushButton->setEnabled(false);
}
void CashDialog::on_numLineEdit_textChanged() {

	double p = ui.priceLineEdit->text().toDouble();
	double n = ui.numLineEdit->text().toDouble();
	if (p > 1e-3 && n > 1e-3)
		ui.okPushButton->setEnabled(true);
	else
		ui.okPushButton->setEnabled(false);
}
void CashDialog::on_okPushButton_clicked() {

	double p = ui.priceLineEdit->text().toDouble();
	double n = ui.numLineEdit->text().toDouble();

	CashContext *cc = new CashContext(ui.discountComboBox->currentIndex());
	double money = cc->getResult(p*n);
	ui.goodsListWidget->addItem(QString::number(times) + tr(".Price: ") + QString::number(p)
		+ tr(" Num: ") + QString::number(n)
		+ tr(" (") + ui.discountComboBox->currentText() + tr(")")
		+ tr(" --> ") + QString::number(money));
	
	total += money;
	ui.totalDoubleLabel->setText(QString::number(total));

	times++;
}
void CashDialog::on_ResetPushButton_clicked() {
	ui.priceLineEdit->setText(tr("0"));
	ui.numLineEdit->setText(tr("0"));
	total = 0.0;
	ui.totalDoubleLabel->setText(QString::number(total));

	times = 1;
	int items = ui.goodsListWidget->count();
	for (int i = 0; i < items; i++)
		delete ui.goodsListWidget->takeItem(0);
}
double CashNormal::acceptedMoney(double originmoney) {
	return originmoney;
}
CashRebate::CashRebate(QString rebate) {
	this->rebate = rebate.toDouble();
}
double CashRebate::acceptedMoney(double originmoney) {
	return originmoney*rebate;
}

CashReturn::CashReturn(QString condition, QString returnmoney) {
	this->condition = condition.toDouble();
	this->returnmoney = returnmoney.toDouble();
}
double CashReturn::acceptedMoney(double originmoney) {
	if (originmoney > condition) {
		originmoney = originmoney - ((int)(originmoney / condition))*returnmoney;
	}
	return originmoney;
}