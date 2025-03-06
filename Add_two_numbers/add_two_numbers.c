#include <stdio.h>
#include <stdlib.h>
 
struct ListNode
 {
    int val;
    struct ListNode *next;
};
 


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    

}


int main()
{
    struct ListNode a;
    struct ListNode b;
    int result;

    a.val = 3;
    a.next = NULL;

    b.val = 9;
    b.next = NULL;

    result = addTwoNumbers(*a, *b);
    printf("%d\n", result);

}


