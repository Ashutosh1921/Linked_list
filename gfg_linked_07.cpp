#include <bits/stdc++.h>
using namespace std;
// Search in a Linked List
//(Iterative and Recursive)

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
// method_1 iteritive solution.
void search(node *head, int findd)
{
    if (head == nullptr)
    {
        return;
    }

    if (head->next == nullptr)
    {
        if (head->data == findd)
        {
            cout << "element's benn found\n";
            return;
        }
        cout << "element not found\n";
        return;
    }

    while (head != nullptr)
    {

        if (head->data == findd)
        {
            cout << "element has been found";
            return;
        }
        head = head->next;
    }
    cout << "element is not present in list";
    return;
}
// method 2 recursive solution.

void search_1(node *head, int ff)
{
    if (head == nullptr)
    {
        cout << "element not found";
        return;
    }
    else if (head->data = ff)
    {
        cout << "element benn found in list\n";
        return;
    }
    search_1(head->next, ff);
}

int main()
{
    node *head = new node(33);
    // head->next = new node(44);
    //  head->next->next = new node(55);
    //  head->next->next->next = new node(66);
    search(head, 33);
    cout << '\n';
    search_1(head, 55);
}
