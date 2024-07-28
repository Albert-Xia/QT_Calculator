#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include <stack>
#include <iostream>

using namespace std;

class Calculator
{
public:
    Calculator();

public:
    int startCalculate(const QString& str );


private:
    int performOperation(int num1, int num2, char op);

    int precedence(char op);

    void handleOneStepOfStack(stack<int> &operandStack, stack<char> &operatorStack);
};

#endif // CALCULATOR_H
