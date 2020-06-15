#include<stddef.h>
#include "mergeTwoLists.h"
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	struct ListNode head;
	struct ListNode *pre = &head;

	while(l1 && l2){
		if(l1->val < l2->val){
			pre->next = l1;
			l1 = l1->next;
			pre = pre->next;
		}else{
			pre->next = l2;
			l2 = l2->next;
			pre = pre->next;
		}  
	}
	pre->next = l1 == NULL ? l2 :l1;
	return head.next;
}

#define TEST 1;
#ifdef TEST
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr1[3] = {1,2,4};
    int arr2[3] = {1,3,4};
    struct ListNode l1Head,l2Head;
    struct ListNode *p1,*p2;
    p1 = &l1Head;
    p2 = &l2Head;
    int i;
    for(i=0;i<3;i++){
	struct ListNode *tmp1 = (struct ListNode *)malloc(sizeof(struct ListNode));
	tmp1->val = arr1[i];
	struct ListNode *tmp2 = (struct ListNode *)malloc(sizeof(struct ListNode));
	tmp2->val = arr2[i];
	p1->next = tmp1;
	p1=p1->next;
	p2->next = tmp2;
	p2 = p2->next;
    }
    p1->next = NULL;
    p2->next = NULL;
    //=================================
    printf("the first input linklist is:[ ");
    p1 = l1Head.next;
    do{
	printf("%d ",p1->val);
	p1 = p1->next;
    }while(p1);
    printf("]\n");

    printf("the second input linklist is : [ ");
    
    p2 = l2Head.next;
    do{
	printf("%d ",p2->val);
	p2 = p2->next;
    }while(p2);
    printf(" ]\n");
    struct ListNode *pret = mergeTwoLists(l1Head.next,l2Head.next);
    printf("merge two linklist,the result is: [");
    do{
	printf("%d ",pret->val);
	pret = pret->next;
    }while(pret);
    printf("]\n");
    return 0;
}
#endif
