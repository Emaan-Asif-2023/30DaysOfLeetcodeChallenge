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
         ios_base::sync_with_stdio(0);
        if(!head)return false;
        ListNode* fastNode=head;
        ListNode* slowNode=head;

        while(fastNode!=NULL){
            fastNode=fastNode->next;
            if(fastNode!=NULL)fastNode=fastNode->next;
            slowNode=slowNode->next;
            if(fastNode==slowNode && fastNode!=NULL)return true;
        }
        return false;
        
    }
};