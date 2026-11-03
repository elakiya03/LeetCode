#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *removeNthFromEnd(Node *head, int n)
{
    int len = 0;
    Node *temp = head;
    while (temp)
    {
        len++;
        temp = temp->next;
    }

    if (len == 1)
    {
        delete head;
        return nullptr;
    }

    if (n == len)
    {
        Node *t = head;
        head = head->next;
        delete t;
        return head;
    }

    Node *curr = head;
    Node *prev = nullptr;
    for (int i = 1; i < len - n + 1; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    return head;
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
    l1->next->next = new Node(3);
    l1->next->next->next = new Node(4);
    l1->next->next->next->next = new Node(5);

    Node *res = removeNthFromEnd(l1, 2);
    display(res);
    return 0;
}