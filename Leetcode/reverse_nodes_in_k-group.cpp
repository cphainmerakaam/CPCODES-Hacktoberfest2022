/*Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

head = [1,2,3,4,5], k = 1
Output: [1,2,3,4,5]

head = [1], k = 1
Output: [1]

Constraints:

The number of nodes in the list is in the range sz.
1 <= sz <= 5000
0 <= Node.val <= 1000
1 <= k <= sz

problem link:- https://leetcode.com/problems/reverse-nodes-in-k-group/
*/

class Solution {
public:
    int size(ListNode* head)
    {
        int count=0;
        for(ListNode* it=head;it;it=it->next)
            count++;
        return count;
    }
    
    ListNode* reverseHelper(ListNode* head,int k,int n)
    {
        if(!head)
            return nullptr;
        ListNode* p=nullptr;
        ListNode* q=head;
        ListNode* r=head->next;
        ListNode* h=nullptr;
        ListNode* t=nullptr;
        ListNode* pvh=nullptr;
        ListNode* pvt=nullptr;
        ListNode* newHead=nullptr;
        int it=n/k;
        while(it--)
        {
            int count=k;
            while(count--)
            {
                if(p==nullptr)
                    h=q;
                q->next=p;
                p=q;
                q=r;
                if(r)
                    r=r->next;
                t=p;
            }
            if(newHead==nullptr)
                newHead=t;
            if(pvh)
                pvh->next=t;
            pvh=h;
            pvt=t;
            p=nullptr;
        }
        if(q)
            h->next=q;
        return newHead;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=size(head);
        ListNode* newHead=reverseHelper(head,k,n);
        return newHead;
    }
};