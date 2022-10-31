#include <iostream>
using namespace std;

class queue {
    public:
    int size;
    int front;
    int rear;
    int * arr;

    queue(int si){
        size = si;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
};

bool isFull(queue * q){
    if(q -> rear == q -> size -1)
    return true;
    else 
    return false;
}

bool isEmpty(queue * q){
    if(q -> front == q -> rear)
    return true;
    else 
    return false;
}

void enqueue(queue * &q, int val){
    if(isFull(q)){
        cout << "Queue Full" << endl;
    }
    else{
        q -> rear ++;
        q -> arr[q -> rear] = val;
    }
}

int dequeue(queue * &q){
    int x = -1;
    if(isEmpty(q)){
        cout << "Queue Empty" ;
    }
    else{
        q -> front ++;
        x = q -> arr[q -> front];
    }
    return x;
}

void print(queue * q){
    int temp = q -> front + 1;
    while(temp <= q -> rear){
        cout << q -> arr[temp]<<" ";
        temp ++;
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter size : " ;
    cin >> size ;
    queue * q = new queue(size); 

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60);

    print(q);

    dequeue(q);
    dequeue(q);

    print(q);
}