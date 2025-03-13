class Solution(object):
    def addTwoNumbers(self, l1, l2):
        temp = ListNode(0)
        pointer = temp
        carry = 0

        while l1 is not None or l2 is not None:
            x = l1.val if l1 is not None else 0
            y = l2.val if l2 is not None else 0
            
            sum = carry + x + y
            carry = sum // 10

            temp.next = ListNode(sum % 10)
            
            temp = temp.next
            if l1 is not None: l1 = l1.next
            if l2 is not None: l2 = l2.next

        if carry > 0:
            temp.next = ListNode(carry)

        return pointer.next
