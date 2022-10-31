#include <iostream>
using namespace std;

class node {
    public: 
    int data;
    node * next;
    

    node(int val){
        data = val;
        next = NULL;
    }
};

void enqueue(node * &front, node * &rear, int val){
    node * t = new node(val);
    if(t == NULL)
    cout << " queue full ";
    else{
        if(front == NULL)
        front = rear = t;
        else
        rear -> next = t;
        rear = t;
    }
}

void dequeue(node * &front){
    node * temp ; 
    if(front == NULL)
    cout << " queue empty ";
    else{
        temp=front;
        front = front -> next;
        delete(temp);
    }
}

void print(node * front, node * rear){
    node * temp = front;
    while(temp != rear -> next){
        cout<< temp -> data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    node * front = NULL;
    node * rear = NULL;

    enqueue(front,rear, 10);
    enqueue(front,rear, 20);
    enqueue(front,rear, 30);
    enqueue(front,rear, 40);
    enqueue(front,rear, 50);

    print(front,rear);

    dequeue(front);

    print(front,rear);

    
    
}