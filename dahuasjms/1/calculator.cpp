#include <iostream>
#include <string>
using namespace std;
class Operation {
protected:
    double NumberA;
    double NumberB;
    double Result;
public:
    Operation(){
        NumberA = 0.0;
        NumberB = 0.0;
        Result	= 0.0;
    }
    void setNumberA(double a){
        NumberA = a;
    }
    void setNumberB(double b){
        NumberB = b;
    }
    double getNumberA(){
        return NumberA;
    }
    double getNumberB(){
        return NumberB;
    }
    virtual double getResult(){
        return Result;
    }
};
class OperationAdd : public Operation {
    virtual double getResult(){
        return NumberA + NumberB;
    }
};
class OperationSub : public Operation {
    virtual double getResult(){
        return NumberA - NumberB;
    }
};
class OperationMul : public Operation {
    virtual double getResult(){
        return NumberA * NumberB;
    }
};
class OperationDiv : public Operation {
    virtual double getResult(){
        if (NumberB == 0){
            throw "dividor cannot be 0.";
        } else {
            return NumberA / NumberB;
        }
    }
};
class OperationFactory {
public:
    static Operation * createOperation(char op){
        Operation *oper;

        switch (op){
            case '+':
                oper = new OperationAdd();
                break;
            case '-':
                oper = new OperationSub();
                break;
            case '*':
                oper = new OperationMul();
                break;
            case '/':
                oper = new OperationDiv();
                break;
        }

        return oper;
    }
};
int main(){
    double a, b;
    char op;

    cout << "input two numbers:\na:" << endl;
    cin >> a;
    cout << "b:" << endl;
    cin >> b;
    cout << "operator:" << endl;
    cin >> op;

    Operation *oper = OperationFactory::createOperation(op);

    oper->setNumberA(a);
    oper->setNumberB(b);
    try {
        cout << "result:" << oper->getResult() << endl;
    } catch (const char * a){
        cout << a << endl;
    }
}
