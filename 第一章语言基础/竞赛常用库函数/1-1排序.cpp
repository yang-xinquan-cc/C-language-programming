#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//这里例子是int类型的,也可以传结构体之类的,pair之类的 
bool cmp(const int &a,const int &b){
	return a>b;
}

int main(){
	//sort函数排序sort(起始地址,结尾地址,排序方法)
	int n=9;
	//可以输入n，然后输入数组，然后排序，这里为了展示，固定9个数 
	int arr[n]={5,6,1,3,4,2,8,7,9};
	sort(arr,arr+n);
	for(int i=0;i<n;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<'\n';
	//vector是数组(容器),用vector<数据类型> 数组名
	vector<int> vt={5,6,1,3,4,2,8,7,9};
	//使用时可以像普通数组一样 
	cout<<vt[0]<<'\n'; 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	//sort函数排序sort(起始地址,结尾地址,排序方法)
	//接下来是排序方法,有默认的两种 
	//greater<类型>(),因为是方法，所以有括号，
	//less<类型>() 
	sort(vt.begin(),vt.end(),greater<int>()); 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	sort(vt.begin(),vt.end(),less<int>()); 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	//自定义比较函数
	//cmp函数需要写在main函数之前,因为编译运行是从上往下进行的 
	//如果要写在主函数之后，则需要在main之前申明此函数,main之后写该函数的实现 
	sort(vt.begin(),vt.end(),cmp);
	 for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	return 0;
} 

