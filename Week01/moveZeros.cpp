class Solution {
	public:
		void moveZeroes(vector<int>& nums) {
			int m = 0;
			for(int i =0;i<nums.size();i++){
				if(nums[i] == 0){
					m++;
				}else if(m>0){
					nums[i-m] = nums[i];
					nums[i] = 0;
				}
			}
		}
};
