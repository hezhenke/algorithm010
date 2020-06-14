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
int main(){
    int arr1[3] = {1,2,4};
    int arr2[3] = {1,3,4};
    struct ListNode l1Head,l2Head;
    int i;
    for(i=0;i<3;i++){
	struct ListNode tmp1;
    }
    return 0;
}
#endif
