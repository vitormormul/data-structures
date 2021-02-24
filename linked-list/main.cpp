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
    List list = List();
    list.insert(3);
    return list.head->data == expected;
}

bool test_list_show()
{
    List list = List();
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.show();
}

int main()
{
    test_list_show();
    cout << test_node() && test_list();
};