#include <iostream>
#include "list-structures.h"

using namespace std;

bool test_node()
{
    int expected = 3;
    Node node = Node(3);
    return node.getData() == expected;
}

int main()
{
    cout << test_node();
};