#include<bits/stdc++.h>
using namespace std;

int main(){
	//if()条件判断语句 
	//如果括号里的成立则执行第一个语句体{}或单行语句 
	if(10>20){
		cout<<"10>20\n";
	}
	//也可以 
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
	
	// for循环判断语句
	int array[10]={1,2,3,4,5,6,7,8,9,10};//10个int容量的数组，下标从0到9 
	for(int i=0;i<sizeof(array)/sizeof(int);++i){//sizeof是计算多少Bit(字节),int是4字节的，故要/4 | /sizeof(int) 
		cout<<array[i]<<' ';
	}
	cout<<'\n';
	
	// while 循环判断语句 
	int index=0;
	while(index<sizeof(array)/sizeof(int)){
		cout<<array[index]<<' ';
		++index;
	}
	cout<<'\n';
	
	//for循环 使用时一般知道循环多少次
	//while循环 使用时一般不知道循环多少次
	//两者可以互相改，但习惯简单来做 
	
	return 0;
} 
