#ifndef CASHDIALOG_H
#define CASHDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_cashDialog.h"

class CashDialog : public QDialog
{
	Q_OBJECT

public:
	CashDialog(QWidget *parent = 0);
	~CashDialog();

	private slots:
	void on_priceLineEdit_textChanged();
	void on_numLineEdit_textChanged();
	void on_okPushButton_clicked();
	void on_ResetPushButton_clicked();
private:
	Ui::CashDialogClass ui;
	double total;
	int times;
};

class CashSuper {
public:
	virtual double acceptedMoney(double originmoney) =0 ;
};

class CashNormal :public CashSuper {
public:
	virtual double acceptedMoney(double originmoney);
};

class CashRebate :public CashSuper {
public:
	CashRebate(QString rebate);
	virtual double acceptedMoney(double originmoney);
private:
	double rebate;
};

class CashReturn :public CashSuper {
public:
	CashReturn(QString condition, QString returnmoney);
	virtual double acceptedMoney(double originmoney);
private:
	double condition;
	double returnmoney;
};

class CashContext {
public:
	CashContext(int i) {
		switch (i)
		{
		case 0:
			cs = new CashNormal;
			break;
		case 1:
			cs = new CashRebate(QString::number(0.8));
			break;
		case 2:
			cs = new CashReturn(QString::number(300), QString::number(100));
			break;
		default:
			break;
		}
	}
	double getResult(double money) {
		return cs->acceptedMoney(money);
	}
private:
	CashSuper *cs;
};
#endif // CashDialog_H
