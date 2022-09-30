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
        
//         //This Solution has time complexity and memory O(n) 
        
//         //for lists of size 0
//         if(head == NULL){
//             return false;
//         }
        
//         unordered_set<ListNode*> uset;
        
//         while(head != NULL){
//             if(uset.find(head) == uset.end()){
//                 uset.insert(head);
//             }
//             else{
//                 return true;
//             }
//             head = head->next;
            
//         }
//         return false;
        
        //This solution is O(1) memory
        
        if (head == NULL) {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        
        return false;
    }
};