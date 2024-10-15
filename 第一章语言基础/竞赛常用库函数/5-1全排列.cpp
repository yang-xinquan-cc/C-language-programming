#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="abcde";
	//全排列就是按字典顺序，不断变化的
	//next_permutation(起始地址，终止地址)(字典变大)
	//由于底层用递归实现的,数据最多10个,题目一般限制时间是一秒 
	do{
		cout<<str<<'\n';
	}while(next_permutation(str.begin(),str.end()));
	//prev_permutation(起始地址，终止地址)(字典变小)
	do{
		cout<<str<<'\n';
	}
	while(prev_permutation(str.begin(),str.end()));
	//这里由于用的do while所以edcba下一个是abcde，然后abcde没有prev_permutation(),会返回false,终止while循环
	 
	return 0;
} 
