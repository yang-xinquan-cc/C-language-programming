#include<bits/stdc++.h>
using namespace std;
//STL是程序设计中最常用的库函数
//有很多数据类型都是设计好的
//本篇主要是pair

template<class T>//模板类, 关键字template<typename 类型名> 或者 template<class 类型名> 只支持最近的一个函数 
//后面用到 类型名 变量名;时,如果格式确定编译器会自动分辨类型 
struct pair2 {
	T first;
	T second;
	pair2(){
		
	}
	pair2(T x,T y){
		first=x;
		second=y;
	}
	bool operator==(const pair2 &other)const{
		if(this.first==other.first && this.second==other.second){
			return true;
		}
		return false;
	}
	//...还有< > != <= >= 之类的，还有排序规则 这里只表示一部分 
};
template<class T>
void Swap(T a,T b){
	T temp=a;
	a=b;
	b=temp;
}
 
int main(){
	pair2<int> p1;
	p1.first=10;
	p1.second=20;
	cout<<p1.first<<" "<<p1.second<<'\n'; 
	
	pair2<double> p2;
	p2.first=10.9;
	p2.second=20.6;
	cout<<p2.first<<" "<<p2.second<<'\n'; 
	
	//pair2 p3(10.1,1.2);错的,即使构造函数里有定义类型，对于结构体必须知道类型才能创建 
	//pair2 p4;错的,使用时必须指定类型 
	
	//举个例子 
	int a=10,b=20,c=30.5,d=40.6;
	Swap(a,b);
	cout<<a<<" "<<b<<'\n'; 
	Swap(c,d);
	cout<<c<<" "<<d<<'\n';
	//Swap(a,c) 错的，因为两种类型编译器不知道该用那种类型，除非强制类型转换
	
	//pair也是可以嵌套的，比如说搞个三维坐标
	//我的pair2无法实现三维坐标，只能2的n次方的 
	pair<int,pair<int,int>> pos1;
	pos1.first=1;
	pos1.second.first=2;
	pos1.second.second=3;
	cout<<"x1="<<pos1.first<<"y1="<<pos1.second.first<<"z1="<<pos1.second.second<<'\n';
	
	pair<int,pair<int,int>> pos2(1,make_pair(2,3));//可以用make_pair来做初始化赋值
	//pos2(1,2,3)和pos2(1,(2,3))这两种是不行的,里面没有这样的构造函数 
	cout<<"x2="<<pos2.first<<"y2="<<pos2.second.first<<"z2="<<pos2.second.second<<'\n';
	
	pos2.second.first=4;
	if(pos1<pos2){
		cout<<"pos1<pos2\n";
	}else{
		cout<<"pos1>=pos2\n";
	}
	//可以看到,pair是先比较first,如果first一样大就比second,俗话就是按字典序排列的,有大小关系就可以进行排序了
	//可以用sort函数
	vector<pair<int,pair<int,int>>>vt;//动态数组,下章会更详细的讲解 
	vt.push_back(pos1);
	vt.push_back(pos2);
	sort(vt.begin(),vt.end());//sort默认从小到大less函数 
	for(auto x:vt){
		cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<'\n';
	}
	//对于sort的自定义的排序规则，在常用库函数那写过 
	return 0;
} 
