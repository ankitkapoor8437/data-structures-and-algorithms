/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
//         createed two pointers with name fast and slow
        ListNode* fast = head;
        ListNode* slow = head;
        
//         traversing the listnode
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
//             if during the iteration, is there any point comes where fast get equal to slow then return true, else false.
            if(slow==fast)
                return true;
        }
        return false;
    }
};