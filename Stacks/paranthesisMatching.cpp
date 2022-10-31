#include <iostream>
using namespace std;

class stack {
    public:
    int size;
    int top;
    char *s;
    
    stack(int si){
        size = si;
        top = -1;
        s = new char[size];
    }
};

void push(stack * st, int val){

    if(st -> top == st -> size - 1)
      cout << "stack overflow";
    else{
        st -> top ++;
        st -> s[st -> top] = val;
    }
}

void pop( stack * st ){

    int x = -1;
    if(st -> top == -1){
        cout << "Stack underflow";
    }
    else{
    x = st -> s[st -> top];
    st -> top --;
    }
}

bool isEmpty(stack * st){
    if(st -> top == -1)
    return true;
    else
    return false;
}

bool isBalance(stack * st, string exp){
    int len = exp.length();
    for(int i = 0; i < len; i++ ){
        if(exp[i] == '('){
            push(st, exp[i]);
        }
        else if(exp[i] == ')'){
            if(isEmpty(st))
            return false;
            else
            pop(st);
        }
    }
    if(isEmpty(st))
    return true;
    else
    return false;
}

int main(){
    string exp;
    getline(cin, exp);
    int size = exp.length();
    stack * st = new stack(size);

    bool x = isBalance(st, exp);

    if(x)
    cout << "Balanced" << "\n";
    else
    cout << "Not balanced" << "\n";
}