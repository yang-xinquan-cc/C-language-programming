#include<bits/stdc++.h>
using namespace std;

//�����Ƚ��ȳ�,�ŶӴ�,�ȵ����������ܷ���,�󵽵��˺����ܷ��� 

//queue q ����
//priority_queue<int,vector<int>,grater<int>> pq ���ȶ���
//deque dq ˫�˶��� 

//�����Ǻ���������,main֮���к�����ʵ�� 
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
	q.pop();//ɾ��ͷ��Ԫ��10,������� 
	cout<<"q.front()="<<q.front()<<"\n";
	cout<<"q.back()="<<q.back()<<"\n";
	cout<<"q.size()="<<q.size()<<"\n";
	cout<<"q.empty()="<<q.empty()<<"\n"; 
	/*Ҳ��û�е������ģ����浽set��map���е� 
	for(auto x:q){
		cout<<x<<' ';
	}
	cout<<'\n'; 
	*/
}
struct cmp{
	bool operator()(int a,int b) {
		return a>b;//С���� 
	}
};
void priority_queuetext(){
	priority_queue<int,vector<int>> pq;
	//priority_queue<int,vector<int>,less<int>> pq;�ȼ��� 
	//�������ɶ�����,���ĸ��������ȶ��еĶ�,Ĭ��less<int> �����(����Ԫ���ڶ���)
	//ÿ��ɾ������,��������������ģ�������Ԫ�ؼ����Ŷ���
	//ɾ��������ʱ��log2(n),�ڲ��Ѿ�д����,���þ���
	pq.push(10);
	pq.push(5);
	pq.push(15);
	pq.push(25);
	pq.push(20);
	cout<<"pq.top()="<<pq.top()<<'\n';//25
	pq.pop();
	cout<<"pq.top()="<<pq.top()<<'\n';//20,��Ϊɾ��25��,20������ 
	cout<<"**************************\n";
	priority_queue<int,vector<int>,greater<int>> ppq;
	//greater С����(��СԪ���ڶ���)
	while(!pq.empty()) {
		ppq.push(pq.top());
		pq.pop();
	}
	cout<<"ppq.top()="<<ppq.top()<<'\n';//5
	ppq.pop();
	cout<<"ppq.top()="<<ppq.top()<<'\n';//10
	//һ����
	cout<<"**************************\n";
	//�Զ����������
	priority_queue<int,vector<int>,cmp> zpq;//��Ҫд������,��ǰ��,������дһ��α��������(), 
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
	dp.push_back(10);//β�� 
	dp.push_front(5);//ͷ�� 
	dp.push_front(0);
	dp.push_back(15);
	cout<<"dp.front()="<<dp.front()<<'\n';//ͷԪ�� 
	cout<<"dp.back()="<<dp.back()<<'\n';//βԪ�� 
	dp.pop_back();//ɾ����β 
	dp.pop_front();//ɾ����ͷ
	if(dp.size()==0&&dp.empty()){
		cout<<"dp.size()==0&&dp.empty()\n";
	}else{
		cout<<"dp.size()="<<dp.size()<<" dp.empty()="<<dp.empty()<<'\n';
	}
	dp.erase(dp.begin());//ɾ��ָ��λ�õ�ֵ 
	dp.erase(dp.begin(),dp.begin()+1);//ɾ��ָ����Χ��ֵ����ҿ� 
	dp.insert(dp.begin()+2,666);//ָ��λ�ò������� 
	for(auto x:dp){//��begin end ���е�������������auto���Զ��� 
		cout<<x<<" ";
	}
	cout<<"\n";
	dp.clear();
}
