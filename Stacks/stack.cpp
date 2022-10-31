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

void pop(stack * st){
    int x = -1;
    if(st -> top == -1){
        cout << "Stack underflow";
    }
    else{
    x = st -> s[st -> top];
    st -> top --;
    }

}

void peek(stack * st, int pos ){
    if(pos > 0 && pos < st -> size){
        cout << st->s[st->top - pos + 1];
    }
}

void stacktop(stack * st){
    cout<<st -> s[st -> top];
}

bool isFull(stack * st){
    if(st -> top == st -> size -1)
    return true;
    else
    return false;
}

bool isEmpty(stack * st){
    if(st -> top == -1)
    return true;
    else
    return false;
}

void print(stack *st)
{
    int temp = st->top;
    while (temp != -1)
    {
        cout << st->s[temp]<<" ";
        temp --;
    }
    cout << "\n";
}

int main()
{
    stack * st = new stack(5);
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);
    push(st, 50);
    print(st);
    // pop(st);
    // print(st);
    // push(st,60);
    // print(st);

    // peek(st, 2);
}