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
