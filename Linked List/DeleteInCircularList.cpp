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

void circular(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
}

void circularDisplay(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

void DeletionAtBegin(node *&head)
{
    node *p = head->next;
    node *q = head;
    while (p->next != head)
    {

        p = p->next;
    }
    p->next = head->next;
    head = head->next;
    delete (q);
}

void DeletionAtMiddle(node * head, int val){
    node * temp = head->next;
    node * p = head;
    node * q = NULL;
    while(temp -> next != head){

        if(p->data != val){
             q = p;
             p = p -> next;
        }
        else{
            q ->next = p -> next;
            delete(p);
        }

        temp = temp -> next;

    }
}

int main()
{
    node *head = NULL;
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    insertion(head, 5);

    circular(head);

    circularDisplay(head);

    DeletionAtMiddle(head, 3);

    cout << endl;
    circularDisplay(head);
}