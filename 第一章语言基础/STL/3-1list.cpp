#include<bits/stdc++.h>
using namespace std;

//list双向链表
//双向表示每次插入和删除只能在两头插入删除时间复杂度O(1),查找时间O(n)
//动态申请和释放空间,也有迭代器的 
//很少部分的题用list 

typedef struct node{
	int x,y,z;
}node;

int main(){
	list<node> mylist;
	//如果该对象所属的类（或结构体）没有显式的构造函数，C++ 编译器会尝试进行聚合初始化
	//默认x,y,z赋值 
	mylist.push_back({1,2,3});//从尾部添加数据 
	mylist.push_front({0,1,2}); //从头部添加数据 
	mylist.push_back({2,3,4}); 
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	mylist.pop_back();//删尾 
	mylist.pop_front();//删头 
	
	node front=mylist.front();//获取头部元素
	node back=mylist.back(); //获取尾部元素 
	
	//大小和是否为空 
	cout<<"mylist.size()="<<mylist.size()<<" mylist.empty()="<<mylist.empty()<<'\n';
	
	//指定位置插入数据(位置,值) mylist.insert(mylist.begin()+1,front);是不行的 
	mylist.insert(mylist.begin(),front); 
	mylist.insert(mylist.end(),back); 
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	cout<<"*********************************\n";
	//指定位置删除数据(位置,位置) 想要再指定位置需要用++和--
	//begin++是往后走,没有就到end不动了
	//end++是往后走会出错 ,--end就是前一个
	//erase是左闭右开的清除 
	//mylist.erase(++ ++mylist.begin(),++mylist.end());
	mylist.erase(++ ++mylist.begin(),--mylist.end());
	
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	cout<<"*********************************\n";
	//清空 
	mylist.clear();
	return 0;
} 
