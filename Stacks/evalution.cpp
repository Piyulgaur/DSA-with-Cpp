#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *s;

    stack(int si)
    {
        size = si;
        top = -1;
        s = new int[size];
    }
};

void push(stack *st, int val)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow";
    }
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

int pop(stack * st){
    int x = -1;
    if(st -> top == -1){
        cout << "Stack underflow";
        return x;
    }
    else{
    x = st -> s[st -> top];
    st -> top --;
    return x;
    }

}

bool isOperand(char x)
{
    if (x == '0'||x == '1'||x == '2'||x == '3'||x == '4'||x == '5'||x == '6'||x == '7'||x == '8'||x == '9')
        return true;
    else
        return false;
}

void evaluate(stack * st, string exp){
    
    int i = 0, x1,x2;
    while( i < exp.length()){
        if(isOperand(exp[i])){
            push(st,exp[i]-'0');
        }
        else{
            x2 = pop(st);
            x1 = pop(st);
            if(exp[i] == '+')
            push (st, x1+x2);
            else if(exp[i] == '-')
            push (st , x1 - x2);
            else if(exp[i] == '*')
            push (st , x1 * x2);
            else if(exp[i] == '/')
            push (st , x1 / x2);
        }
        i++;
    }
    cout << pop(st) <<endl;

}

int main(){
    string exp;
    getline(cin, exp);
    int len = exp.length();
    stack * st = new stack(len);

    evaluate(st , exp);
}