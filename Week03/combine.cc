class Solution {
	public:
		vector<vector<int>> combine(int n, int k) {
			vector<vector<int>> list;
			vector<int> result;
			dfs(list,result,n,k,0,-1);       
			return list;
		}
		void dfs(vector<vector<int>>& list, vector<int>& result, int n, int k, int pos,int pre){
			if(pos == k){
				list.push_back(result);
				return;
			}
			if((pos + (n-pre)) <= k)return;//剪枝，添加之后用时节省了2/3
			//在当前对不合理的取值进行判断，结束下一层的递归操作。
			//如果当前剩余可操作数字的个数即（n-pre）< k-pos+1(即组合中有待赋值的位置个数)，（+1是因为当前pos还没有进行操作），则可以判断该条路径不可能得到正确的解，不再向下探寻。
			for(int i=pre+1; i<n ; i++){
				result.push_back(i+1);
				pre = i;
				dfs(list,result,n,k,pos+1,pre);
				result.pop_back();//回溯
			}
			return;
		}
};
