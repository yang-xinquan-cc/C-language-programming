#include<bits/stdc++.h>
using namespace std;
//1.1�������͵�ʹ��
using ll=long long;//��long long�������͸ĳ�ll ����ʹ�� 
//typedef long long ll; typedef������һ���� ��������� 

//2.1�����ʹ�� 
int const N=1e6+5;//const��ʾ����,�ô�д��ĸ��ʾ(ϰ����)
int arr[N];//���ڶ����ڷǺ������ڲ�������N��С�������ڲ�����Ĭ��ֵ0,�����ں������ڲ�,���������(�����ڴ��λ�ò�ͬ) 

int main(){
	//1.2�������͵�ʹ��
	char a='c';//�ַ���''������
	cout<<a<<'\n'; 
	char aa[15]="hello world";//�ַ���(�ַ�����)��""˫����,�����±궼�Ǵ�0��ʼ 
	cout<<aa<<'\n'; 
	ll num=114514114514114514;//1e18�����ݣ���Ҫ��longlong����
	cout<<num<<'\n';
	double flow=3.14159263;//float���Ȳ�������double
	cout<<flow<<'\n';//3.14159
	//cout������Ż�����Ҫָ����ʽ
	cout<<fixed<<setprecision(9)<<flow<<'\n';
	
	//3.1�ַ������ʹ�� 
	char str[10]="123321";//�ַ����Ľ�β��\0 
	cout<<"sizeof(str)="<<sizeof(str)<<'\n'; 
	int index=0;//��0��ʼ 
	while(str[index]!='\0'){
		cout<<str[index];
		++index;
	}
	cout<<'\n';
	char strr[]="123a\0a321";//���Բ�ָ������,��������������ص�'\0' 
	cout<<"sizeof(strr)="<<sizeof(strr)<<'\n'; 
	cout<<strr<<'\n';//����'\0'��ֹ
	
	//4��������������ֵ(�������������)
	int n=10,m=20;
	cout<<"n="<<n<<"m="<<m<<'\n';
	
	//�����д�����ǽ�������������ֵ����Ҫ������ʱ����temp
	int temp=n;
	n=m;
	m=temp;
	cout<<"n="<<n<<"m="<<m<<'\n';
	 
	//5�ж�1-10��ż�������
	for(int i=1;i<=10;++i){
		if(i%2==0){
			cout<<i<<" ";
		}
	} 
	//i%2��ȡi/2������,Ҳ����д��i&1��&�ǰ�λ�룬��iΪż��ʱ�����������λһ����0������&1Ϊ0����ż�� 
	return 0;
} 
