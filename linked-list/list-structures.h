class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    int getData()
    {
        return data;
    }

    Node* getNext()
    {
        return next;
    }

    void setNext(Node* newNode)
    {
        next = newNode;
    }
};

class List
{
private:
    Node *head;
    Node *tail;

    bool isEmpty()
    {
        return this->head == NULL;
    }
public:
    List()
    {
    head = NULL;
    tail = NULL;        
    }

    Node getHead()
    {
        return *this->head;
    }

    void insert(int data)
    {
        Node node = Node(data);
        if (isEmpty())
        {
            tail = &node;
        }
        else
            node.setNext(head);
        head = &node;
        
    }
};