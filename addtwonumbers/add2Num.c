#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *createNode(int val)
{
    struct ListNode *node =
        (struct ListNode *)malloc(sizeof(struct ListNode));

    node->val = val;
    node->next = NULL;

    return node;
}

struct ListNode *addTwoNumbers(
    struct ListNode *l1,
    struct ListNode *l2)
{

    struct ListNode temp;
    temp.next = NULL;

    struct ListNode *res = &temp;

    int carry = 0;

    while (l1 || l2 || carry)
    {

        int sum = carry;

        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        struct ListNode *node = createNode(sum % 10);

        res->next = node;
        res = res->next;
    }

    return temp.next;
}

void display(struct ListNode *head)
{

    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}

void freeList(struct ListNode *head)
{

    while (head)
    {
        struct ListNode *temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{

    struct ListNode *l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);

    struct ListNode *l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);

    struct ListNode *result = addTwoNumbers(l1, l2);

    printf("Result: ");
    display(result);

    freeList(l1);
    freeList(l2);
    freeList(result);

    return 0;
}