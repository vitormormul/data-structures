#include <iostream>
#include "list-structures.h"

using namespace std;

bool test_node()
{
    int expected = 3;
    Node node = Node(3);
    return node.data == expected;
}

bool test_list()
{
    int expected = 3;
    List *list = new List;
    list->insert(3);
    return list->getHead().data == expected;
}

int main()
{
    cout << test_node() && test_list();
};