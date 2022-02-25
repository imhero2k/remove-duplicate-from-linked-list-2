class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        dummy = ListNode(0,head)
        cur = head
        pre = dummy
        while cur and cur.next:
            while cur.next and cur.val == cur.next.val:
                cur = cur.next
            if pre.next == cur:
                pre = pre.next
                
            else:
                pre.next = cur.next
                
            cur = cur.next

        return dummy.next
                    
