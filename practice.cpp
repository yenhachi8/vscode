#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

int main()
{
    Node a, b, c;
    Node *ptr = &a;
    a.data = 12;
    a.next = &b;
    b.data = 5;
    b.next = &c;
    c.data = 30;
    c.next = nullptr;

    while (ptr != NULL)
    {
        cout << "address= " << ptr << " data= " << ptr->data << endl;

        ptr = ptr->next;
    }
}