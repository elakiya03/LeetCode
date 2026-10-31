from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:

        dummy = ListNode(0)
        curr = dummy
        carry = 0

        while l1 or l2 or carry:
            total = carry

            if l1:
                total += l1.val
                l1 = l1.next

            if l2:
                total += l2.val
                l2 = l2.next

            carry = total // 10
            digit = total % 10

            curr.next = ListNode(digit)
            curr = curr.next

        return dummy.next

    def printList(self, head):
        while head:
            print(head.val, end=" ")
            head = head.next
        print()


if __name__ == "__main__":
    num1 = ListNode(2)
    num1.next = ListNode(4)
    num1.next.next = ListNode(3)

    num2 = ListNode(5)
    num2.next = ListNode(6)
    num2.next.next = ListNode(4)

    sol = Solution()

    sumList = sol.addTwoNumbers(num1, num2)
    sol.printList(sumList)