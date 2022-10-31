#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertion(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

// void display(node * head){

// }

void circular(node * head){
    node * temp = head;
    while(temp -> next != NULL){
    temp = temp -> next;
    }
    temp -> next = head;
    
}

void display(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void circularDisplay(node * head){
    node * temp = head;
    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while( temp != head);
}

void recursionDisplay(node * temp, node * head){
    static int flag = 0;
    if(flag == 0 || temp != head){
        flag = 1;
        cout << temp -> data << " ";
        recursionDisplay(temp -> next, head);
        
    }
    else{
        return ;
    }
}

int main(){
    node * head = NULL;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    insertion(head, 5);

   

    circular(head);

    

    recursionDisplay(head, head);



}