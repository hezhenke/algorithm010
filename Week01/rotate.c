/**
 * 使用环状替换方法
 * 算法复杂度O(n)
 * 空间复杂度O(1)
 */


void rotate(int* nums, int numsSize, int k){
	if(k<0)
		return;
	if(k > numsSize)
		k= k%numsSize;
	int i,cnt=0;
	int pre,tmp,next;
	for(i = 0;cnt < numsSize;i++){
		pre = nums[i];
		next = i;
		do{
			next = (next+k)%numsSize;
			tmp = nums[next];
			nums[next]=pre;
			pre = tmp;
			cnt++;
		}while(next != i);
	}
}

#define TEST 1;
#ifdef TEST
#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int i,newSize;
    printf("the input array is:");
    for(i =0;i<7;i++){
	printf("%d ",arr[i]);
    } 
    printf("\n");
    rotate(arr,7,4);
    printf("afeter rotate,the result is :");
    int j;
    for(j=0;j<7;j++){
	printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}
#endif

