#include <iostream>
using namespace std;

class node {
    public :
    int data ;
    node * next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertion(node * &head, int val){

    node * n  =  new node(val);
    if(head==NULL){
        head = n;
    }
    
        node * temp = head;
        while(temp->next != NULL){

            temp = temp->next;
            
        }
        temp->next = n;
    

}

void display(node * head){

    node * temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
}

void isLoop(node * head){
    node * p;
    node * q;

    p = q = head;
    do{
        p = p->next;
        q = q->next;
        if(q!=NULL){
            q = q -> next;
        }
        else{
            q = q;
        }
    }while(p && q && p!=q);
    if(p == q){
        cout << "loop ";
    }
    else{
        cout << " linear";
    }
}

int main (){

    node * head = NULL;
    insertion(head, 10);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 40);
    insertion(head, 50);
    insertion(head, 60);

    isLoop(head);

    node * t1 = head->next->next;
    node * t2 = head->next->next->next;
    t2->next = t1;

    isLoop(head);
}