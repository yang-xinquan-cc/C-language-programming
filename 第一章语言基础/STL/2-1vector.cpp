#include<bits/stdc++.h>
using namespace std;
//前面也讲过模板类(泛型)
//这次 动态数组vector
//vector的头文件<vector>已经包含在bits/stdc++.h了 
int main(){
	vector<int> vt1;
	vector<double> vt2; 
	vt1.push_back(10);
	vt1.push_back(20);
	vt1.push_back(30);//动态扩充容量
	
	vt2.push_back(1.1);
	vt2.push_back(1.2);
	vt2.push_back(1.3);
	
	//常用函数
	//vt.push_back(数据);往后添加新元素 
	for(auto x:vt1){//也有迭代器 
		cout<<x<<" "; 
	}cout<<'\n';
	//vt.pop_back();删除最后一个数据 
	vt1.pop_back();
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	vt1.push_back(0);
	//排序 
	sort(vt1.begin(),vt1.end());
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	//去重
	vt1.push_back(10);
	//前面讲过，去重必须针对有序序列才能用库函数unique
	sort(vt1.begin(),vt1.end());
	vt1.erase(unique(vt1.begin(),vt1.end()),vt1.end());
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	vt1.push_back(10);
	vt1.push_back(10);
	vt1.push_back(10);
	cout<<"vt1.size()="<<vt1.size()<<'\n';
	if(vt1.empty()){
		cout<<"vt1 is empty\n";
	}else{
		cout<<"vt1 is not empty\n"; 
	}
	//size和empty都可以判断数组是否为空，empty更快，size是on的复杂度
	cout<<"vt1.capacity()="<<vt1.capacity()<<'\n';
	vt1.clear();
	cout<<"vt1.capacity()="<<vt1.capacity()<<'\n';
	//由此可见,clear只是清除数据，内存容量还是8个单位,每次容量不够，扩二倍，避免频繁扩容 
	return 0;
}
