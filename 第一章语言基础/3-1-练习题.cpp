//https://www.lanqiao.cn/problems/250/learning/?page=1&first_category_id=1&name=%E8%BD%AC%E5%AD%97%E7%AC%A6%E4%B8%B2
/*
��ת�ַ����е��ַ�

��Ŀ����
ʵ��һ���㷨��ʵ�ַ�ת�ַ�����Ĺ��ܡ���ת��Ҫ�����£�

���ַ�������ַ����з�ת������ ['b', ' ', 'a', 'r'] ��� ['r', 'a', ' ', 'b']��

���ַ������滻Ϊ��ת������顣

��������
����һ���ַ��������Ȳ����� 100���ַ������ܺ��пո�

�������
���һ���ַ��������ַ���Ϊ�����ַ����ķ�ת�ַ�����
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
