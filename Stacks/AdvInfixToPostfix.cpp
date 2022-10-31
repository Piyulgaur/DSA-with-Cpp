#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    char *s;

    stack(int si)
    {
        size = si;
        top = -1;
        s = new char[size];
    }

    void push(char val)
    {
        if (top == size - 1)
            cout << "stack overflow";
        else
        {
            top++;
            s[top] = val;
        }
    }

    char pop()
    {
        char x = '\0';
        if (top == -1)
        {
            cout << "Stack Underflow";
            return '\0';
        }
        else
        {
            x = s[top];
            top --;
            return x;
        }
    }
};

bool isOperator(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')' || x == '^')
        return true;
    else
        return false;
}

bool out_pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 3;
    else if (x == '^')
        return 6;
    else if (x == '(')
        return 7;
    else
        return 0;
}

bool in_pre(char x)
{
    if (x == '+' || x == '-')
        return 2;
    else if (x == '*' || x == '/')
        return 4;
    else if (x == '^')
        return 5;
    else if (x == '(')
        return 0;
}

string infixTopostfix(stack *&st, string exp)
{

    string postfix = "";
    int i = 0;
    while (i < exp.length())
    {
        if (isOperator(exp[i]))
        {
            while (out_pre(exp[i]) <= in_pre(st->s[st->top]) || exp[i] == ')')
            {
                postfix += st->pop();
            }
            st->push(exp[i]);
        }
        else
        {
            postfix += exp[i];
        }
        i++;
    }
    while(st -> top != -1){
        postfix += st -> pop();
    }
    return postfix;
}

int main()
{
    string exp;
    cout << "enter string - ";
    getline(cin, exp);
    int len  = exp.length();
    stack * st = new stack(len);

    string ans = infixTopostfix(st, exp);

    cout << " answer is - " << ans << endl;

}