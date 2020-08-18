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
    int i, val, num;
    Node *first, *current, *pre;
    cout << "Number of Nodes:" << endl;
    cin >> num;
    for (i = 0; i < num; i++)
    {
        current = (Node *)malloc(sizeof(Node));
        cout << "Data for Node " << i + 1 << "= ";
        cin >> current->data;
        if (i == 0)
        {
            first = current;
        }
        else
        {
            pre->next = current;
        }
        pre = current;
        current->next = nullptr;
        }
    current = first;

    while (current != NULL)
    {
        cout << "address= " << current << " data= " << current->data << endl;

        current = current->next;
    }
}