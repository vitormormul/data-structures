#include <iostream>
#include <string>
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
    list.insert(1);
    list.insert(2);
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
    return true;
}

bool test_list_find()
{
    int expected = 3;
    List list = List();
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    return list.find(2)->data == expected;
}

int main()
{
    cout << test_node() << endl;
    cout << test_list() << endl;
    cout << test_list_find() << endl;
    cout << test_list_show() << endl;
};