#include <iostream>
using namespace std;

class queue {
    public:
    int size;
    int front;
    int rear;
    int * arr;
    
    queue( int si) {
        size = si ;
        front = 0;
        rear = 0;
        arr = new int[size];
    }
};

void enqueue(queue * &q, int val){
    if((q -> rear + 1) % q -> size == q -> front){
        cout << " queue overflow " ;
    }
    else{
        q -> rear = (q -> rear+1) % q -> size;
        q -> arr[ q -> rear] = val;
    }
}

void dequeue(queue * &q){
    int x = -1;
    if(q -> front == q -> rear)
    cout << "queue underflow" ;
    else{
        q -> front = (q -> front + 1)%q ->size;
        x = q -> arr[q -> front];
    }
}

void print(queue * q){
    int temp = q -> front;
    while( temp != q -> rear ){
        temp = (temp + 1)%q -> size;
        cout<< q -> arr[temp] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter size : " ;
    cin >> size ;
    queue * q = new queue(size+1); 

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

    enqueue(q,100);
    enqueue(q,200);
    

    print(q); 
}