#include<bits/stdc++.h>
using namespace std;

int main(){
	//memset()设置大量数据的值(时间复杂度O(n)),用8进制数,常用设置为0,127,-127
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<"\n";
	memset(arr,-127,sizeof(arr));
	for(int i=0;i<10;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<"\n";
	//swap()交换俩变量的值 
	int a=10,b=20;
	cout<<"a="<<a<<"b="<<b<<'\n';
	swap(a,b);//自动类型匹配，只要a和b的数据类型一致就行
	cout<<"a="<<a<<"b="<<b<<'\n'; 
	//reverse()翻转,字符串或者数组都行 
	vector<int> vt={1,2,3,4,5,6};
	for(auto x:vt){
		cout<<x<<" ";
	}
	cout<<'\n';
	reverse(vt.begin(),vt.end());
	for(auto x:vt){
		cout<<x<<" ";
	}
	cout<<'\n';
	//unique()去除相邻元素的重复数据 返回开始重复数据的指针 (本质是将相同的进行往后的替换,所以还需要处理) 
	string str="aabbcc";
	cout<<str<<'\n'; 
	auto it=unique(str.begin(),str.end());
	cout<<str<<'\n'; 
	cout<<it-str.begin()<<'\n';
	str.erase(it,str.end());
	cout<<str<<'\n';
	return 0;
} 
