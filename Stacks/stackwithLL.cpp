#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;

    node (int val){
        data = val;
        next = NULL;
    }
};

void push(node * &top, int val){

    node * t = new node(val);
    t -> next = top ;
    top = t;
}

void pop(node * &top){
    int x =-1;
    if(top == NULL){
        cout << "stack underflow";
    }
    else{
        x = top-> data;
        node * temp = top;
        top = top -> next;
        delete(temp);
    }
}

void peek(node * top, int pos){
    node * temp = top;
     
    for( int  i = 0; i < pos-1; i++){
        temp = temp -> next;
    }
    cout << temp -> data <<"\n";
   
}

void print(node * top){
    node * tmp = top;
    while(tmp != NULL){
        cout << tmp -> data << " ";
        tmp = tmp -> next;
    }
    cout << "\n";
}

int main() {

node * top = NULL;
push(top,10);
push(top,20);
push(top,30);
push(top,40);
push(top,50);

print(top);

// pop(top);

// print(top);

peek(top,5);

}

