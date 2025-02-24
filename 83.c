/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//function to find next unique node
struct ListNode* find_next (struct ListNode* head , int target){
    while(head){
        if (head->val != target){
            return head;
        }
        head = head -> next;
    }
    return head;
}
//function to delete all the duplicate node
void delete_nodes(struct ListNode * head ,struct ListNode* target){
    while (head != target){
        struct ListNode* temp = head ;
        head = head -> next;
        free(temp);
    }
}
//function to ittrate throught the link list
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* head_st= head;
    while(head){
        struct ListNode* next,*prev;
        next = find_next (head->next,head->val);
        prev = head->next;
        head->next = next;
        head = head->next;
        delete_nodes(prev,next);
    }
    return head_st;
}