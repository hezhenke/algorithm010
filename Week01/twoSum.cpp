#include<map>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			map<int,int> a;
			for(unsigned int i = 0;i<nums.size();i++){
				if(a.find(target-nums[i]) != a.end()){
					return {a[target-nums[i]],(int)i};
				}else{
					a[nums[i]] = i;
				}
			}
			return {};

		}
};

int main(){
	vector<int> v = {2,7,11,5};
	int target = 9;
	cout << "the input vector is:" << endl;
	for(unsigned int i =0;i< v.size(); i++){
	    cout << v[i] << " ";
	}
	cout << endl;
	cout << "target is" << target << endl;
	Solution s;
	vector<int> res = s.twoSum(v,target);
	cout << "the result is :" << endl;
	for(unsigned int j=0;j< res.size(); j++){
	    cout <<res[j] << " "; 
	}
	cout << endl;
	return 0;
}
