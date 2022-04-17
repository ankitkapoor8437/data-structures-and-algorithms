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
public:
    ListNode* removeElements(ListNode* head, int val) {
        
    //base case
      if(head==NULL)
        return head;
      
      //create prev and current pointers for traversal
      ListNode* prev = NULL;
      ListNode* curr = head;
      
      //while loop for traversing the list
      while(curr)
      {
        //if the element that to be removed is found
        if(curr->val == val)
        {
          //condition where head and current is same but prev is NULL
          if(prev==NULL)
            head = curr->next;
          else
            //move prev next to curr nodes next as curr is to move forward after getting out of the while loop
            prev->next = curr->next;
        }
        else
          //move the prev to curr node as curr is to move forward after getting out of the while loop
          prev = curr;
        
        //no matter what curr will move forward
        curr = curr->next;
      }
      
      //return the head
        return head;
    }
};