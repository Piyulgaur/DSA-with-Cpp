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
};

void push(stack *&st, int val)
{

    if (st->top == st->size - 1)
        cout << "stack overflow";
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

char pop(stack *&st)
{

    char x = '\0';
    if (st->top == -1)
    {
        return x;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

char stacktop(stack *st)
{
    if (st->top == -1)
        return '\0';
    else
        return st->s[st->top];
}

bool isOp(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return true;
    else
        return false;
}

int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 0;
}

void infix_postfix(stack *&st, string exp)
{
    string postfix = "";
    int i = 0;
    while (i < exp.length())
    {

        if (isOp(exp[i]))
        {
            while (pre(exp[i]) <= pre(stacktop(st)))
            {
                    postfix += pop(st);
            }
            push(st, exp[i]);
        }
        else
        {
            postfix += exp[i];
        }
        i++;
    }
    while (st->top != -1)
    {
        postfix += pop(st);
    }
    cout << postfix << endl;
}
void print(stack *st)
{
    int temp = st->top;
    while (temp != -1)
    {
        cout << st->s[temp] << " ";
        temp--;
    }
    cout << "\n";
}

int main()
{
    string exp;
    getline(cin, exp);
    int size = exp.length();
    stack *st = new stack(size);

    infix_postfix(st, exp);
}