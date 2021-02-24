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
        cout << "List:" << endl;
        while (node != nullptr)
        {
            cout << node->data << endl;
            node = node->next;
        }
    }

    Node* find(int data)
    {
        Node *prev = this->head;
        Node *node = prev->next;

        while (node != nullptr)
        {
            if (node->data == data)
            {
                return prev;
            }
            prev = node;
            node = node->next;
        }
        return this->tail->next;
    }

    void remove(int data)
    {
        Node *node = find(data);
        Node *next = node->next;
        node->next = next->next;
    }

    int index(int data)
    {
        if (!find(data))
        {
            return -1;
        }
        Node *node = head;
        int i;
        for (i = 0; node->data != data; i++)
        {
            node = node->next;
        }
        return i;
    }
};