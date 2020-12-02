/*
public class ListNode {
      public int val;
      public ListNode next;
      public ListNode(int val=0, ListNode next=null) {
          this.val = val;
          this.next = next;
      }
  }
*/

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode(0);
        ListNode list1 = l1;
        ListNode list2 = l2;
        ListNode current = head;
        int carry = 0;
        int sum = 0;
        int x; 
        int y;
        
        while (list1 != null || list2 != null) {
            
            if (list1 != null) 
                x = list1.val;
            
            else
                x = 0;
            
            if (list2 != null) 
                y = list2.val;
            
            else
                y = 0;
            
            sum = carry + x + y; 
            current.next = new ListNode(sum % 10);
            carry = sum/10;
            current = current.next;
            
            if (list1 != null)
                list1 = list1.next;
            
            if (list2 != null)
                list2 = list2.next;
        }
        
        if (carry > 0) {
            current.next = new ListNode(carry);
        }
        
        return head.next;
    }
}
