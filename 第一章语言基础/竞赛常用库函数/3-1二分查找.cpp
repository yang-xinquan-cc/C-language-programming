#include<bits/stdc++.h>
using namespace std;

//���ֲ��� 

int main(){
	//�ܶ��ֵ����ݱ���������Ĳ���ʹ��
	//ʱ�临�Ӷ�log2(n),���ǳ�˵log(n),���ֱ�������ÿ��ȡ�м�����Ƚϣ�ÿ��ɸѡһ���������ݣ�һ����Ч���ݣ����������ң����Ժܿ�
	//�ڳ�������У���������nlog(n)�ĸ��Ӷ�+����log(n)���Ӷ������ٽ������
	int arr[10];
	for(int i=0;i<10;++i){
		arr[i]=i*10;
	} 
	//lower_bound(��ʼ��ַ,��ֹ��ַ,Ŀ��ֵ)���ڵ��� 
	//upper_bound(��ʼ��ַ,��ֹ��ַ,Ŀ��ֵ)����
	//���صĶ��ǵ�ַ,��Ҫȡ* 
	cout<<*lower_bound(arr,arr+10,10)<<'\n';
	cout<<*upper_bound(arr,arr+10,10)<<'\n';
	//Ҳ���Ի�ȡ��Ӧ���±�
	cout<<lower_bound(arr,arr+10,20)-arr<<'\n';
	cout<<upper_bound(arr,arr+10,20)-arr<<'\n';
	return 0;
} 
