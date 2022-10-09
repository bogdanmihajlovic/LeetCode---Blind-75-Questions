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
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* head = nullptr;
        ListNode* curr = nullptr;

        
        while(p && q){    
        
            ListNode* node = nullptr;
            if(p->val < q->val){
                node = p;
                p = p->next;
            }else{
                node = q;
                q = q->next;
            }
            
            if(!head){ 
                head = node;
                curr = head;
                curr->next = nullptr;
            }else{
                curr->next = node;
                curr = curr->next;
                curr->next = nullptr;
            }
        
        }
        
        if(p){
            if(curr) curr->next = p;
            else head = p;
        } else if(q){
            if(curr) curr->next = q;
            else head = q;
        }
        
        return head;
    }
};