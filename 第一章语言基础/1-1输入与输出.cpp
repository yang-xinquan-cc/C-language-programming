//c语言的输入输出头文件 
#include<stdio.h>
//c++的输入输出头文件 
#include<iostream>
//需要使用命名空间 
using namespace std;
//否则使用cin,cout时需要std::cin>>和std::cout<<过于繁琐 

int main(){
	int x,y;
	//c语言的输出printf 
	//适用速度快，格式复杂容易错 
	printf("请输入x y\n"); 
	
	//c语言的输入scanf
	//适用于数据量大，格式复杂容易错，但限定格式%d之类的能更快
	scanf("%d%d",&x,&y);
	
	printf("x=%d,y=%d\n",x,y);
	
	//c++的输出cout 
	//适用速度慢，格式简单 
	//endl是清空缓存并输出\n(回车) 
	cout<<"请输入x y"<<endl; 
	
	//c++的输入cin
	//适用于数据量小，格式简单，没准确限定格式，会慢
	cin>>x>>y; 
	
	cout<<"x="<<x<<",y="<<y<<endl;
	return 0;
} 
