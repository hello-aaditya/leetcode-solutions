/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode head1 = list1;
        ListNode head2 = list2;

        ListNode mergedList = new ListNode(0);
        ListNode head = mergedList;

        while ((head1 != null) && (head2 != null)) {
            int data1 = head1.val;
            int data2 = head2.val;

            if (data1 <= data2) {
                mergedList.next = head1;
                head1 = head1.next;
            } else {
                mergedList.next = head2;
                head2 = head2.next;
            }
            mergedList = mergedList.next;
        }

        if (head1 != null) {
            mergedList.next = head1;
        } else {
            mergedList.next = head2;
        }

        return head.next;
        
    }
}