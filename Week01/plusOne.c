/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int *result = (int *) malloc(sizeof(int) * (digitsSize + 1));
	memset(result, 0, (digitsSize + 1) * sizeof(int));
	int i,j=0,plusOne = 1;
	for(i = digitsSize-1;i>=0;i--){
		result[j++] = (digits[i]+plusOne)%10;
		if(digits[i] + plusOne >=10){
			plusOne = 1;
		}else{
			plusOne = 0;
		}

	}
	if(plusOne){
		result[j++] = plusOne;
	}

	*returnSize = j;
	//数组反转
	int tmp;
	j = j-1;
	i=0;

	while(i <= j){
		tmp = result[i];
		result[i++] = result[j];
		result[j--] = tmp;
	};
	return result;
}}}
