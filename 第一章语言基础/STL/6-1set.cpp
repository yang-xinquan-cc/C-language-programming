#include<bits/stdc++.h>
using namespace std;

//set st集合
//multiset mst多重集合
//unordered_set ust无序集合
 
void settext(); 
void multisettext();
void unordered_settext();
int main(){
	//settext();
	/*
	有些题
	如果只用维护最大最小值:推荐用priority_queue
	如果用迭代器或者某些特定的值:推荐用set 
	*/
	//multisettext();
	unordered_settext();
	return 0;
} 

void settext(){
	set<int> st;
	st.insert(5);//插入元素 
	st.insert(5);//集合,最重要的特点是去重 
	st.insert(15);
	st.insert(25);
	cout<<"st.size()="<<st.size()<<'\n';
	for(auto x:st){
		cout<<x<<" ";
	}
	cout<<"\n"; 
	//st.find(5) 返回的是迭代器,如果找到返回对应的迭代器,没找到就返回st.end() 
	if(st.find(5)!=st.end()){
		cout<<"st.find(5)="<<*st.find(5)<<'\n';
	}else{
		cout<<"st.find(5)=st.end()\n";
	}
	st.erase(5);//删除键值为5的元素
	if(st.find(5)!=st.end()){
		cout<<"st.find(5)="<<*st.find(5)<<'\n';
	}else{
		cout<<"st.find(5)=st.end()\n";
	}
	//由于集合底层是红黑树(二叉平衡搜索树)有序的存储
	//可以用O(log(n))的时间来查找,删除,添加
	//也可以用lower_bound,upper_bound 返回对应的迭代器 
	//至于排序规则默认less<int> 也可以设置成greater<int>
	//也可以像priority_queue的自定义排序规则一样,写一个类然后重载()当做伪函数传参
	//set<int,cmp> st; 
}

void multisettext(){
	multiset<int> mst;
	//特点是容许重复元素,其他的函数与set一样
	//需要注意的当用multiset时用lower_bound和upper_bound时,返回的是一个满足条件的地址 
	mst.insert(5);//插入元素 
	mst.insert(5);//集合,最重要的特点是去重 
	mst.insert(15);
	mst.insert(25);
	cout<<"mst.size()="<<mst.size()<<'\n';//4
	for(auto x:mst){
		cout<<x<<" ";//5 5 15 25
	}
	cout<<"\n";
}

void unordered_settext(){
	//无序集合
	//想要理解无序集合,推荐先去理解 桶排序 
	//就是给1e6的空间,如果对应元素存在则+1,可以记录该键值出现的次数
	//unordered_set不能记录次数 
	//桶排序理解后 无序集合类似桶,但不太一样
	//用的哈希值,比如说数据范围是1e9的,但数据量是1e6的
	//这时候不能用桶来存,内存不够
	//用哈希值可以避免这样的问题
	//用特定键值代表特定值
	//当数据量大的时候，会出现哈希冲突
	unordered_set<int> ust;
	for(int i=1;i<=100000;++i){
		ust.insert(i*5+i*50);
	}
	ust.erase(55);
	ust.insert(110);
	cout<<"ust.count(110)="<<ust.count(110)<<'\n';//效果和find差不多 
	cout<<"ust.size()="<<ust.size()<<'\n';
	if(ust.find(55)!=ust.end()){
		cout<<"ust.find(55)\n";
	}else{
		cout<<"ust没找到find(55)\n";
	}
}
