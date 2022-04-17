/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         base case
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
//         now create a head pointer
        ListNode* head = list1;
        
//         and check which value from both the lists is small and assign head to it
        if(list1->val > list2->val)
        {
            head = list2;
            list2 = list2->next;
        }
        else
        {
            list1= list1->next;
        }
        
//         now create a current pointer to traverse both the list and merge the two lists.
        ListNode* curr = head;
        
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            
            curr = curr-> next;
        }
        
        if(list1 == NULL)
            curr->next = list2;
        else
            curr->next = list1;
        
        return head;
    }
};