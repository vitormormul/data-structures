class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
            node.next = head;
        head = &node;
    }
};