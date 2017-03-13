#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class BasicLinkedList
{
public:

    void display(Node* head)
    {
        Node *start = head;
        while(start)
        {
            cout << start->data <<" ";
            start = start->next;
        }
    }

    Node* insert(Node* head, int data)
    {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            return head;
        }
        Node *itr = head;
        while(itr->next)
        {
            itr=itr->next;
        }

        itr->next = newNode;
        return head;
    }
};