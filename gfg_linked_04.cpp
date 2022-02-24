// delete first node of linked list.
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = nullptr;
    }
};
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void delete_1(node *&head)
{
    if (head = nullptr)
    {
        // it means no elements in node.
        return;
    }
    node *temp = head->next;
    head = temp;
    return;
}

int main()
{
    node *head = new node(66);
    head->next = new node(77);
    head->next->next = new node(88);
    print(head);
    cout << '\n';
    delete_1(head);
    print(head);
}