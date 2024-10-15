#include<bits/stdc++.h>
using namespace std;

//二分查找 

int main(){
	//能二分的数据必须是有序的才能使用
	//时间复杂度log2(n),我们常说log(n),二分本质上是每次取中间的数比较，每次筛选一半有用数据，一半无效数据，按二进制找，所以很快
	//在程序设计中，常用排序nlog(n)的复杂度+二分log(n)复杂度来快速解决问题
	int arr[10];
	for(int i=0;i<10;++i){
		arr[i]=i*10;
	} 
	//lower_bound(起始地址,终止地址,目标值)大于等于 
	//upper_bound(起始地址,终止地址,目标值)大于
	//返回的都是地址,需要取* 
	cout<<*lower_bound(arr,arr+10,10)<<'\n';
	cout<<*upper_bound(arr,arr+10,10)<<'\n';
	//也可以获取对应的下标
	cout<<lower_bound(arr,arr+10,20)-arr<<'\n';
	cout<<upper_bound(arr,arr+10,20)-arr<<'\n';
	return 0;
} 
