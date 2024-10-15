//https://www.lanqiao.cn/problems/250/learning/?page=1&first_category_id=1&name=%E8%BD%AC%E5%AD%97%E7%AC%A6%E4%B8%B2
/*
反转字符串中的字符

题目描述
实现一个算法来实现反转字符数组的功能。反转的要求如下：

将字符数组的字符进行反转，例如 ['b', ' ', 'a', 'r'] 变成 ['r', 'a', ' ', 'b']。

将字符数组替换为反转后的数组。

输入描述
读入一行字符串，长度不超过 100，字符串可能含有空格。

输出描述
输出一行字符串，该字符串为读入字符串的反转字符串。
*/ 
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	string str;
	getline(cin,str);
	reverse(str.begin(),str.end());
	cout<<str<<'\n';
	return 0;
} 
