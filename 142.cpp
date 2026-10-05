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
ListNode* cycleDetector(ListNode* head){
  ListNode* slow=head;
  ListNode* fast=head;
  while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
          return slow;
        }
  }
  return nullptr;
}
    ListNode *detectCycle(ListNode *head) {
      //Detect cycle first
      ListNode* detectedPoint=cycleDetector(head);
      if(detectedPoint==nullptr){
        return nullptr; 
      }
      ListNode* start=head;
      while(start!=detectedPoint){
        start=start->next;
        detectedPoint=detectedPoint->next;
      }
      return detectedPoint;
    }
};
