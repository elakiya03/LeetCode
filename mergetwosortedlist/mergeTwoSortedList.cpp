#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

Node *mergeTwoLists(Node *l1, Node *l2)
{
    Node *dummy = new Node(-1);
    Node *res = dummy;

    if (!l1)
        return l2;
    if (!l2)
        return l1;
    if (!l1 && !l2)
        return nullptr;

    while (l1 && l2)
    {
        if (l1->data <= l2->data)
        {
            res->next = new Node(l1->data);
            l1 = l1->next;
        }
        else
        {
            res->next = new Node(l2->data);
            l2 = l2->next;
        }
        res = res->next;
    }
    while (l1)
    {
        res->next = new Node(l1->data);
        l1 = l1->next;
        res = res->next;
    }

    while (l2)
    {
        res->next = new Node(l2->data);
        l2 = l2->next;
        res = res->next;
    }
    return dummy->next;
}

void display(Node *head)
{
    if (!head)
        return;
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *l1 = new Node(1);
    l1->next = new Node(2);
    l1->next->next = new Node(4);

    Node *l2 = new Node(1);
    l2->next = new Node(3);
    l2->next->next = new Node(4);

    Node *result = mergeTwoLists(l1, l2);
    display(result);
    return 0;
}