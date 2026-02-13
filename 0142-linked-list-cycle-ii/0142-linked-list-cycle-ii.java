/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        // FIND THE LENGTH OF THE CYCLE
        ListNode slow = head;
        ListNode fast = head;

        int length = 0;

        while ((fast != null) && (fast.next != null)) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {
                do {
                    slow = slow.next;
                    length++;
                } while (slow != fast);
                break;
            }
        }
        if (length == 0) {
            return null;
        }
        ListNode ptr1 = head;
        ListNode ptr2 = head;

        while (length != 0) {
            ptr2 = ptr2.next;
            length--;
        }

        while (ptr1 != ptr2) {
            ptr1 = ptr1.next;
            ptr2 = ptr2.next;
            
        }
        return ptr2;
    }
}