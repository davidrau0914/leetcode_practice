/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//Create a valid linked list with allocating mem and assign the value
struct ListNode* newNode(int value) 
{
    struct ListNode* newListNode = malloc(sizeof(struct ListNode));
    if(newListNode==NULL)
        return NULL;
    
    newListNode->val=value;
    newListNode->next=NULL;
    return newListNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* p=l1;
    struct ListNode* q=l2;
    if(p==NULL && q==NULL)
        return NULL;
    
    struct ListNode* l3=newNode(0);
    if(l3==NULL)
        return NULL;
    
    struct ListNode* cur=l3;
    int carry=0;
    
    while(p != NULL || q != NULL) {
        
        int x = (p!=NULL)?p->val:0;
        int y = (q!=NULL)?q->val:0;
        int sum = x+y+carry;

        //Judge the carry value if necessary
        carry=sum/10;
        cur->next=newNode(sum%10);
        
        //Prepare to calculate the value in the next linked list
        cur=cur->next;
        if(p!=NULL) p=p->next;
        if(q!=NULL) q=q->next;        
    }
    
    //Judge the carry value in the highiest digit 
    if(carry>0) cur->next=newNode(carry);
    
    return l3->next;
}
