class ListNode {
    constructor(val, next) {
        this.val = (val === undefined ? 0 : val);
        this.next = (next === undefined ? null : next);
    }
}

var addTwoNumbers = function (l1, l2) {
    let temp = new ListNode(0)
    let res = temp
    let carry = 0

    while (l1 || l2 || carry) {
        let sum = carry
        if (l1) {
            sum += l1.val;
            l1 = l1.next;
        }

        if (l2) {
            sum += l2.val
            l2 = l2.next
        }
        carry = Math.floor(sum / 10);
        res.next = new ListNode(sum % 10)
        res = res.next
    }
    return temp.next
};

function display(head) {
    while (head) {
        process.stdout.write(head.val + " "); //NodeJs Equivalent
        head = head.next;
    }
    console.log();
}

let l1 = new ListNode(2)
l1.next = new ListNode(4)
l1.next.next = new ListNode(3)

let l2 = new ListNode(5)
l2.next = new ListNode(6)
l2.next.next = new ListNode(4)

let result = addTwoNumbers(l1, l2)
display(result)