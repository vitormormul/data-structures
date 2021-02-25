#include <iostream>
#include <stdexcept>

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
        if (isEmpty())
        {
            throw invalid_argument("Empty list.");
        }
        Node *node = head;
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
        throw invalid_argument("Data not found.");
    }

    void remove(int data)
    {
        Node *node = find(data);
        Node *next = node->next;
        node->next = next->next;
    }

    int index(int data)
    {
        find(data);
        Node *node = head;
        int i;
        for (i = 0; node->data != data; i++)
        {
            node = node->next;
        }
        return i;
    }

    Node* item(int index)
    {
        if(index < 0)
            throw invalid_argument("Index must be greater than or equal to zero.");
        Node *node = head;
        for (int i = 0; i < index; i++)
        {
            node = node->next;
        }
        if (node == nullptr)
        {
            throw invalid_argument("Index out of range.");
        }
        return node;
    }

    void append(int data)
    {
        if(isEmpty())
        {
            insert(data);
            return;
        }
        Node *node = new Node(data);
        tail->next = node;
        this->tail = node;
    }

    void insert_in(int index, int data)
    {
        Node *node = find(item(index)->data);
        Node *newNode = new Node(data);
        newNode->next = node->next;
        node->next = newNode;
    }

    void remove_from(int index)
    {
        Node *node = find(item(index)->data);
        node->next = node->next->next;
    }

    void drop()
    {
        Node *node = find(tail->data);
        node->next = NULL;
        tail = node;
    }
};