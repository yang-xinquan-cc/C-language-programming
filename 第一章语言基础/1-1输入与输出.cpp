//c���Ե��������ͷ�ļ� 
#include<stdio.h>
//c++���������ͷ�ļ� 
#include<iostream>
//��Ҫʹ�������ռ� 
using namespace std;
//����ʹ��cin,coutʱ��Ҫstd::cin>>��std::cout<<���ڷ��� 

int main(){
	int x,y;
	//c���Ե����printf 
	//�����ٶȿ죬��ʽ�������״� 
	printf("������x y\n"); 
	
	//c���Ե�����scanf
	//�������������󣬸�ʽ�������״����޶���ʽ%d֮����ܸ���
	scanf("%d%d",&x,&y);
	
	printf("x=%d,y=%d\n",x,y);
	
	//c++�����cout 
	//�����ٶ�������ʽ�� 
	//endl����ջ��沢���\n(�س�) 
	cout<<"������x y"<<endl; 
	
	//c++������cin
	//������������С����ʽ�򵥣�û׼ȷ�޶���ʽ������
	cin>>x>>y; 
	
	cout<<"x="<<x<<",y="<<y<<endl;
	return 0;
} 
