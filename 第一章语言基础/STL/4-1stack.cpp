#include<bits/stdc++.h>
using namespace std;

//stack
//栈,先进后出,可以理解为洗盘子,拿最顶上的盘子 
int main(){
	stack<int> st;
	st.push(10);//压栈 
	st.push(20);
	st.push(30);
	cout<<"st.top()="<<st.top()<<'\n';//返回顶部元素 
	st.pop();//删除顶部元素  
	cout<<"st.size()="<<st.size()<<" st.empty()="<<st.empty()<<"\n";
	//没有迭代器，故要想遍历需要不断地top 和 pop 
	/*
	for(auto x:st){
		cout<<x<<' ';
	} cout<<"\n";
	*/
	//10-20-30,30之前删除过现在是10-20,先进后出,故20先弹出栈,然后是10 
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\n";
	return 0;
}
