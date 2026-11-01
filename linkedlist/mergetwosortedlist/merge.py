class ListNode:
    def __init__(self, val=0):
        self.val = val
        self.next = None


class Solution:
    def merge_two_lists(
        self, list1: ListNode | None, list2: ListNode | None
    ) -> ListNode | None:

        dummy = ListNode(-1)
        res = dummy

        while list1 and list2:
            if list1.val <= list2.val:
                res.next = ListNode(list1.val)
                list1 = list1.next
                res = res.next
            else:
                res.next = ListNode(list2.val)
                list2 = list2.next
                res = res.next

        if list1:
            res.next = list1

        if list2:
            res.next = list2

        return dummy.next

    def print_list(self, head):
        temp = head
        while temp is not None:
            print(temp.val, end=" ")
            temp = temp.next


if __name__ == "__main__":
    l1 = ListNode(1)
    l1.next = ListNode(3)
    l1.next.next = ListNode(6)

    l2 = ListNode(2)
    l2.next = ListNode(4)
    l2.next.next = ListNode(5)

    s = Solution()
    head = s.merge_two_lists(l1, l2)
    s.print_list(head)
