
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode next;
      ListNode()  val(0), next(nullptr) {}
      ListNode(int x)  val(x), next(nullptr) {}
      ListNode(int x, ListNode next)  val(x), next(next) {}
  };
 

class Solution {
public
    
    ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int xtra = 0;
        ListNode curr = new ListNode();
        ListNode sol = curr;

        while (l1  l2)
        {
            if (!l1){
                curr-val = (l2-val + xtra) % 10;
                xtra = (l2-val + xtra)  10;
            }
            else if (!l2){
                curr-val = (l1-val + xtra) % 10;
                xtra = (l1-val + xtra)  10;
            }
            else
            {
                curr-val = (l1-val + l2-val + xtra) % 10;
                xtra = (l1-val + l2-val + xtra)  10;
            }
            if (l1)
                l1 = l1-next;
            if (l2)
                l2 = l2-next;
            if ((l1  l2)  xtra != 0)
            {
                curr-next = new ListNode();
                curr = curr-next;
            }
        }
        if (xtra != 0)
            curr-val = xtra;
        return sol;
    }
};