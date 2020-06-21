#include <vector>
#include "preorder.h"
vector<int> result;
vector<int> preorder(Node* root) {
	if(!root){
		return result;
	}
	result.push_back(root->val);
	for(auto child : root->children){
		preorder(child);
	}
	return result;
}
#ifdef TEST


using namespace std;
#include <iostream>
int main(){

	Node *root = new Node(1,{new Node(3,{new Node(5),new Node(6)}),new Node(2),new Node(4)});


	vector <int> res = preorder(root);

	for (auto r:res){

		cout << r << " "; 

	} 

	return 0;

}

#endif

