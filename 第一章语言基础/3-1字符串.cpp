#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	//string 最大的两个特点，1是内存自动申请,分配,释放 2有迭代器遍历 
	string str;
	cout<<"请输入字符串\n";
	cin>>str; 
	cout<<str<<'\n';
	//1长度
	cout<<"str.length()="<<str.length()<<'\n';
	//2拼接 + | .append()
	str=str+"hello";
	cout<<str<<'\n';
	//3查找
	cout<<"str.find('c')="<<str.find('c')<<'\n';
	//4替换 将角标2-3的字符替换 
	cout<<str.replace(2,3,"zhangsan")<<'\n';
	//5截取 对原str无影响，截取后会返回0-2的字符串 
	cout<<str.substr(0,2)<<'\n';
	//6比较 通过符号就可以比较 
	if(str>"abc"){
		cout<<"str>abc"<<'\n';
	}else if(str=="123456"){
		cout<<"str==123456"<<'\n';
	}else if(str<="abc"){
		cout<<"str<=abc"<<'\n';
	}
	
	//string输出
	cout<<str<<'\n';
	//auto是自动类型,和python类似, 
	//':'是自动类型的匹配 
	for(auto i:str){
		cout<<i;
	} 
	cout<<'\n';
	//纯迭代器: 容器类型::iterator it
	for(string::iterator i=str.begin();i!=str.end();++i){
		cout<<*i;
	}
	cout<<'\n';
	
	return 0;
} 
