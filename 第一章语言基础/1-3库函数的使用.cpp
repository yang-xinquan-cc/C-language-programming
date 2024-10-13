/* 
#include<iostream>
#include<string> 
using namespace std;
*/
//为了以后我们用大量库函数的方便,用万能头文件
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	//ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string str="hello world";//需要string库函数 
	cout<<str<<'\n'; 
	cout<<"请输入字符串(以回车结尾)\n"; 
	cin>>str;
	cout<<str<<'\n'; 
	return 0;
} 
