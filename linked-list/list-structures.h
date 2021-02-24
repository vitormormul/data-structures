#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    bool isEmpty()
    {
        return this->head == nullptr;
    }

    List()
    {
    head = nullptr;
    tail = nullptr;        
    }

    void insert(int data)
    {
        Node *node = new Node(data);
        if (isEmpty())
        {
            this->tail = node;
        }
        else
            node->next = this->head;
        this->head = node;
    }

    void show()
    {
        Node *node;
        if (isEmpty())
        {
            cout << "Empty list.";
            return;
        }
        
        while (node != NULL)
        {
            cout << node->data << endl;
            node = node->next;
        }
    }
};