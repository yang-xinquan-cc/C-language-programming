#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="abcde";
	//ȫ���о��ǰ��ֵ�˳�򣬲��ϱ仯��
	//next_permutation(��ʼ��ַ����ֹ��ַ)(�ֵ���)
	//���ڵײ��õݹ�ʵ�ֵ�,�������10��,��Ŀһ������ʱ����һ�� 
	do{
		cout<<str<<'\n';
	}while(next_permutation(str.begin(),str.end()));
	//prev_permutation(��ʼ��ַ����ֹ��ַ)(�ֵ��С)
	do{
		cout<<str<<'\n';
	}
	while(prev_permutation(str.begin(),str.end()));
	//���������õ�do while����edcba��һ����abcde��Ȼ��abcdeû��prev_permutation(),�᷵��false,��ֹwhileѭ��
	 
	return 0;
} 
