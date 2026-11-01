package linkedlist.mergetwosortedlist;

class Node {
    int val;
    Node next;

    public Node(int data) {
        this.val = data;
        this.next = null;
    }

}

public class Merge {
    static Node mergeTwoLists(Node list1, Node list2) {
        Node dummy = new Node(-1);
        Node res = dummy;

        if (list1 == null)
            return list2;
        if (list2 == null)
            return list1;

        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                res.next = new Node(list1.val);
                list1 = list1.next;
                res = res.next;
            } else {
                res.next = new Node(list2.val);
                list2 = list2.next;
                res = res.next;
            }
        }

        if (list1 != null)
            res.next = list1;
        if (list2 != null)
            res.next = list2;

        return dummy.next;
    }

    static void printList(Node head) {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Node list1 = new Node(1);
        list1.next = new Node(3);
        list1.next.next = new Node(5);

        Node list2 = new Node(2);
        list2.next = new Node(4);
        list2.next.next = new Node(6);

        Node head = mergeTwoLists(list1, list2);
        printList(head);

    }
}
