/**
 * 从大往下，从数组后面往前面合并
 */ 
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	if(nums1Size < m+n){
		return;
	}
	while(m !=0 || n!=0){
		if(n == 0 || m>0 && nums1[m-1] > nums2[n-1]){
			nums1[m+n-1] = nums1[m-1];
			m--;
		}else{
			nums1[m+n-1] = nums2[n-1];
			n--;
		}
	}

}

#define TEST 1
#ifdef TEST

#endif
