#include<string>
using namespace std;

//有效的字母异位词  哈希表解法

bool isAnagram(string s, string t) {
	if(s.size() != t.size()){
		return false;
	}
	int hash[26] = {0};
	for(auto m:s){
		hash[m-'a'] ++;
	}
	for(auto n:t){
		hash[n-'a'] --;
	}
	for(int i=0;i<26;i++){
		if(hash[i] != 0 ){
			return false;
		} 
	}
	return true;

}
// g++ -std=c++11 -Wall -D TEST=1 isAnagram.cpp 
#ifdef TEST
#include<iostream>
int main(){

    string str1 = "anagram";
    string str2 = "nagaram";
    bool result = isAnagram(str1,str2);
    cout << "the input string is :" << str1 << "," << str2 <<endl;
    cout << "the oupt result is :" << result << endl;
    return 0;
}

#endif
