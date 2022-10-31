#include <iostream>
using namespace std;

class queue {
    public:
    int front;
    int rear;
    int size;
    int * arr;

    queue(int val){
        front = -1;
        rear = -1;
        size = val;
        arr = new int[size];
    }
};


void enqueue_rear(queue * &q, int val){
    if(q->rear == q -> size -1){
        cout << " Queue Full";
    }
    else{
        if(q -> front == -1){
            q -> rear ++;
            q -> front++;
            q -> arr[ q -> rear] = val;
        }
        else
            q -> rear ++;
            q -> arr[ q -> rear]= val;
    }
    
}

void enqueue_front(queue * &q, int val){
    if(q -> front == -1){
        q -> front ++;
        q -> rear ++;
        q -> arr[ q -> rear] = val;
    }
    else if(q -> front != 0){
        q -> front --;
        q -> arr[ q -> front] = val;
    }
    else{
        cout << "Queue full";
    }
}

void dequeue_front(queue * &q){
    int x = -1;
    if(q -> front == q -> rear){
        cout << " Queue Empty ";
    }
    else{
        x = q -> arr[ q -> front];
        q -> front ++;
    }
}

void dequeue_end(queue * &q){
    int x = -1;
    if (q -> front == q -> rear){
        cout<< "Queue Empty";
    }
    else{
        x = q -> arr[q -> rear];
        q -> rear --;
    }
}

void print(queue * q){
    int temp = q -> front;
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

    enqueue_rear(q, 10);
    enqueue_rear(q, 20);
    enqueue_rear(q, 30);
    enqueue_rear(q, 40);
    enqueue_rear(q, 50);

    print(q);
    
    dequeue_front(q);
    dequeue_front(q);


    print(q);

    enqueue_front(q, 100);
    enqueue_front(q, 200);


    print(q);

    dequeue_end(q);

    print(q);
}