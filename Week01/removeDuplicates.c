/**
 * 删除排序数组中的重复项（Facebook、字节跳动、微软在半年内面试中考过）
 * 双指针解法
 */


int removeDuplicates(int* nums, int numsSize){
    int i,j;
    j=0;
    if(numsSize == 0){
            return 0;
        }
    for(i=0;i<numsSize;i++){
            if(nums[i] != nums[j]){
	                nums[++j] = nums[i];
	            }
        }
    return ++j;
}

#define TEST 1;
#ifdef TEST
#include<stdio.h>
int main(){
    int arr[5] = {1,1,2,2,3};
    int i,newSize;
    printf("the input array is:");
    for(i =0;i<5;i++){
	printf("%d ",arr[i]);
    } 
    printf("\n");
    newSize = removeDuplicates(arr,5);
    printf("afeter remove the duplicates,the result is :");
    int j;
    for(j=0;j<newSize;j++){
	printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}
#endif

