#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	//string ���������ص㣬1���ڴ��Զ�����,����,�ͷ� 2�е��������� 
	string str;
	cout<<"�������ַ���\n";
	cin>>str; 
	cout<<str<<'\n';
	//1����
	cout<<"str.length()="<<str.length()<<'\n';
	//2ƴ�� + | .append()
	str=str+"hello";
	cout<<str<<'\n';
	//3����
	cout<<"str.find('c')="<<str.find('c')<<'\n';
	//4�滻 ���Ǳ�2-3���ַ��滻 
	cout<<str.replace(2,3,"zhangsan")<<'\n';
	//5��ȡ ��ԭstr��Ӱ�죬��ȡ��᷵��0-2���ַ��� 
	cout<<str.substr(0,2)<<'\n';
	//6�Ƚ� ͨ�����žͿ��ԱȽ� 
	if(str>"abc"){
		cout<<"str>abc"<<'\n';
	}else if(str=="123456"){
		cout<<"str==123456"<<'\n';
	}else if(str<="abc"){
		cout<<"str<=abc"<<'\n';
	}
	
	//string���
	cout<<str<<'\n';
	//auto���Զ�����,��python����, 
	//':'���Զ����͵�ƥ�� 
	for(auto i:str){
		cout<<i;
	} 
	cout<<'\n';
	//��������: ��������::iterator it
	for(string::iterator i=str.begin();i!=str.end();++i){
		cout<<*i;
	}
	cout<<'\n';
	
	return 0;
} 
