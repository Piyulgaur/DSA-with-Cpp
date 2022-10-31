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

void insertion2(node *&head2, int val)
{

    node *n = new node(val);
    if (head2 == NULL)
    {
        head2 = n;
    }
    else
    {

        node *temp = head2;
        while (temp->next != NULL)
        {

            temp = temp->next;
        }
        temp->next = n;
    }
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

void merge(node *first, node *second)
{

    node *third;
    node *last;
    if (first->data < second->data)
    {
        third = first;
        last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }

    while (first != NULL && second != NULL)
    {

        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }

        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if( first != NULL){
        last -> next = first;
    }

    if(second != NULL){
        last -> next = second;
    }

    display(third);
}

int main()
{

    node *head = NULL;
    insertion(head, 10);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 40);
    insertion(head, 50);

    node *head2 = NULL;
    insertion2(head2, 60);
    insertion2(head2, 70);
    insertion2(head2, 80);
    insertion2(head2, 90);
    insertion2(head2, 100);

    merge(head, head2);

}