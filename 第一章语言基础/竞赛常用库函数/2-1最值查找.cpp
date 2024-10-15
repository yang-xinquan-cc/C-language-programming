#include<bits/stdc++.h>
using namespace std;

//最值查找 

int main(){
	int arr[10]={3,1,2,4,6,9,0,8,7};
	//数组名其实也是指针 
	//min_element max_element(初始地址，起始地址) 返回的都是迭代器，需要*取出对应的数 
	cout<<*max_element(arr,arr+10)<<'\n';
	cout<<*min_element(arr,arr+10)<<'\n';
	return 0;
} 
