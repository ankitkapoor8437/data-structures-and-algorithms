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
// recursive method
class Solution {
private:
    void reverse(ListNode* &head, ListNode* current, ListNode* prev)
    {
//         base case
        if(current==NULL)
        {
            head = prev;
            return;
        }
        
        ListNode* forward = current->next;
        reverse(head, forward, current);
        current->next = prev;

    }
public:
    ListNode* reverseList(ListNode* head) {
   
        ListNode* current = head;
        ListNode* prev = NULL;
        reverse(head, current, prev);
        return head;
        
    }
};


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
// iterative method
class Solution {
private:
public:
    ListNode* reverseList(ListNode* head) {
   
        ListNode* current = head;
        ListNode* prev = NULL;
        reverse(head, current, prev);
        return head;
        
        
//if list is empty or has only one element in it
        if(head==NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* forward = NULL;
        
        while(current != NULL)
        {
            forward = current -> next;
            current -> next = prev;
            prev = current;
            current = forward;
        }
        
        return prev;
        
    }
};