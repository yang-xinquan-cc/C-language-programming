#include<bits/stdc++.h>
using namespace std;

//��ֵ���� 

int main(){
	int arr[10]={3,1,2,4,6,9,0,8,7};
	//��������ʵҲ��ָ�� 
	//min_element max_element(��ʼ��ַ����ʼ��ַ) ���صĶ��ǵ���������Ҫ*ȡ����Ӧ���� 
	cout<<*max_element(arr,arr+10)<<'\n';
	cout<<*min_element(arr,arr+10)<<'\n';
	return 0;
} 
