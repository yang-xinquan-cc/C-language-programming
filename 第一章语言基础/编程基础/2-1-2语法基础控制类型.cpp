#include<bits/stdc++.h>
using namespace std;

int main(){
	//if()�����ж���� 
	//���������ĳ�����ִ�е�һ�������{}������� 
	if(10>20){
		cout<<"10>20\n";
	}
	//Ҳ���� 
	if(10<20)
		cout<<"10<20\n";
	//if()else
	if(5>20){
		cout<<"5>20\n";
	}else{
		cout<<"5<=20\n";
	}
	//if else if... else
	if(10>20){
		cout<<"10>20\n";
	}else if(15>20){
		cout<<"15>20\n";
	}else if(20>20){
		cout<<"20>20\n";
	}else{
		cout<<"20<=20\n";
	}
	
	// forѭ���ж����
	int array[10]={1,2,3,4,5,6,7,8,9,10};//10��int���������飬�±��0��9 
	for(int i=0;i<sizeof(array)/sizeof(int);++i){//sizeof�Ǽ������Bit(�ֽ�),int��4�ֽڵģ���Ҫ/4 | /sizeof(int) 
		cout<<array[i]<<' ';
	}
	cout<<'\n';
	
	// while ѭ���ж���� 
	int index=0;
	while(index<sizeof(array)/sizeof(int)){
		cout<<array[index]<<' ';
		++index;
	}
	cout<<'\n';
	
	//forѭ�� ʹ��ʱһ��֪��ѭ�����ٴ�
	//whileѭ�� ʹ��ʱһ�㲻֪��ѭ�����ٴ�
	//���߿��Ի���ģ���ϰ�߼����� 
	
	return 0;
} 
