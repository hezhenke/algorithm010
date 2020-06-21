//两数和：一遍哈希法

#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	map<int,int> m;
	for(unsigned int i=0;i<nums.size();i++){
		if(m.find(target-nums[i]) != m.end())
			return{m[target-nums[i]],(int)i};
		m[nums[i]] = i;
	}
	return {};
}
//g++ -std=c++11 -Wall -D TEST=1 twoSum.cpp
#ifdef TEST
#include<iostream>
int main(){
    vector<int> nums = {2,7,11,15};
    cout << "the input data is [ ";
    for(auto m:nums){
	cout << m << " ";	
    }    
    cout << "]" <<endl;

    vector<int> result = twoSum(nums,9);

    cout << "after two sum,the result is :[ ";
    for(auto r:result){
	cout << r << " ";
    }
    cout << "]" << endl;
    return 0;
}
#endif
