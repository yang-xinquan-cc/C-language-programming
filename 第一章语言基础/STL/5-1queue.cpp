#include<bits/stdc++.h>
using namespace std;

//队列先进先出,排队打饭,先到的人先享受服务,后到的人后享受服务 

//queue q 队列
//priority_queue<int,vector<int>,grater<int>> pq 优先队列
//deque dq 双端队列 

//这里是函数的申明,main之后有函数的实现 
void queuetext();
void priority_queuetext();
void dequetext();
int main(){
	//queuetext();
	//priority_queuetext();
	dequetext();
	return 0;
}

void queuetext(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.pop();//删除头部元素10,按打饭理解 
	cout<<"q.front()="<<q.front()<<"\n";
	cout<<"q.back()="<<q.back()<<"\n";
	cout<<"q.size()="<<q.size()<<"\n";
	cout<<"q.empty()="<<q.empty()<<"\n"; 
	/*也是没有迭代器的，后面到set和map会有的 
	for(auto x:q){
		cout<<x<<' ';
	}
	cout<<'\n'; 
	*/
}
struct cmp{
	bool operator()(int a,int b) {
		return a>b;//小根堆 
	}
};
void priority_queuetext(){
	priority_queue<int,vector<int>> pq;
	//priority_queue<int,vector<int>,less<int>> pq;等价于 
	//可以理解成二叉树,树的根就是优先队列的顶,默认less<int> 大根堆(最大的元素在顶部)
	//每次删除顶部,会重新排列里面的，将最大的元素继续放顶部
	//删除顶部的时间log2(n),内部已经写好了,会用就行
	pq.push(10);
	pq.push(5);
	pq.push(15);
	pq.push(25);
	pq.push(20);
	cout<<"pq.top()="<<pq.top()<<'\n';//25
	pq.pop();
	cout<<"pq.top()="<<pq.top()<<'\n';//20,因为删除25后,20是最大的 
	cout<<"**************************\n";
	priority_queue<int,vector<int>,greater<int>> ppq;
	//greater 小根堆(最小元素在顶部)
	while(!pq.empty()) {
		ppq.push(pq.top());
		pq.pop();
	}
	cout<<"ppq.top()="<<ppq.top()<<'\n';//5
	ppq.pop();
	cout<<"ppq.top()="<<ppq.top()<<'\n';//10
	//一样的
	cout<<"**************************\n";
	//自定义排序规则
	priority_queue<int,vector<int>,cmp> zpq;//需要写个类了,在前面,用类来写一个伪函数重载(), 
	while(!ppq.empty()) {
		zpq.push(ppq.top());
		ppq.pop();
	}
	cout<<"zpq.size()="<<zpq.size()<<'\n';
	cout<<"zpq.top()="<<zpq.top()<<'\n';//10
	zpq.pop();
	cout<<"zpq.top()="<<zpq.top()<<'\n';//15
}

void dequetext(){
	deque<int> dp;
	dp.push_back(10);//尾插 
	dp.push_front(5);//头插 
	dp.push_front(0);
	dp.push_back(15);
	cout<<"dp.front()="<<dp.front()<<'\n';//头元素 
	cout<<"dp.back()="<<dp.back()<<'\n';//尾元素 
	dp.pop_back();//删除队尾 
	dp.pop_front();//删除队头
	if(dp.size()==0&&dp.empty()){
		cout<<"dp.size()==0&&dp.empty()\n";
	}else{
		cout<<"dp.size()="<<dp.size()<<" dp.empty()="<<dp.empty()<<'\n';
	}
	dp.erase(dp.begin());//删除指定位置的值 
	dp.erase(dp.begin(),dp.begin()+1);//删除指定范围的值左闭右开 
	dp.insert(dp.begin()+2,666);//指定位置插入数据 
	for(auto x:dp){//有begin end 就有迭代器，可以用auto来自动搞 
		cout<<x<<" ";
	}
	cout<<"\n";
	dp.clear();
}
