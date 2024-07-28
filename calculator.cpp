#include "calculator.h"

Calculator::Calculator() {}

int Calculator::precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

int Calculator::startCalculate(const QString& expression )
{
    stack<int> operandStack; //存放数值
    stack<char> operatorStack;//存放运算符

    for(int i = 0; i < expression.size(); i++)
    {
        if(expression[i].isDigit())
        {
            int num = 0;
            while(i < expression.size() && expression[i].isDigit())
            {
                num = num * 10 + (int)(expression[i++].toLatin1() - '0');
            }
            i--;
            operandStack.push(num);
        }
        else if(expression[i] == '(')
        {
            operatorStack.push(expression[i].toLatin1());
        }
        else if(expression[i] == ')')
        {
            while(operatorStack.top() != '(')
            {
                handleOneStepOfStack(operandStack,operatorStack);
            }
            operatorStack.pop(); //推出‘(’
        }
        else if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            while(!operatorStack.empty() &&
                   (precedence(operatorStack.top()) > precedence(expression[i].toLatin1()))) // */的优先级较高
            {
                handleOneStepOfStack(operandStack,operatorStack);
            }
            operatorStack.push(expression[i].toLatin1());
        }
    }

    while(!operatorStack.empty())
    {
        handleOneStepOfStack(operandStack,operatorStack);
    }

    return operandStack.top();
}


int Calculator::performOperation(int num1, int num2, char op)
{
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2!= 0) {
            return num1 / num2;
        } else {
            std::cout << "Division by zero!" << std::endl;
            return -1;
        }
    }
    return -1;
}

void Calculator::handleOneStepOfStack(stack<int> &_operandStack, stack<char> &_operatorStack)
{
    int num2 = _operandStack.top(); _operandStack.pop();
    int num1 = _operandStack.top(); _operandStack.pop();
    char op = _operatorStack.top(); _operatorStack.pop();
    _operandStack.push(performOperation(num1,num2,op));
}
