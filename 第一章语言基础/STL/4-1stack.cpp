#include<bits/stdc++.h>
using namespace std;

//stack
//ջ,�Ƚ����,�������Ϊϴ����,����ϵ����� 
int main(){
	stack<int> st;
	st.push(10);//ѹջ 
	st.push(20);
	st.push(30);
	cout<<"st.top()="<<st.top()<<'\n';//���ض���Ԫ�� 
	st.pop();//ɾ������Ԫ��  
	cout<<"st.size()="<<st.size()<<" st.empty()="<<st.empty()<<"\n";
	//û�е���������Ҫ�������Ҫ���ϵ�top �� pop 
	/*
	for(auto x:st){
		cout<<x<<' ';
	} cout<<"\n";
	*/
	//10-20-30,30֮ǰɾ����������10-20,�Ƚ����,��20�ȵ���ջ,Ȼ����10 
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\n";
	return 0;
}
