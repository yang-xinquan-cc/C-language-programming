#include<bits/stdc++.h>
using namespace std;

//list˫������
//˫���ʾÿ�β����ɾ��ֻ������ͷ����ɾ��ʱ�临�Ӷ�O(1),����ʱ��O(n)
//��̬������ͷſռ�,Ҳ�е������� 
//���ٲ��ֵ�����list 

typedef struct node{
	int x,y,z;
}node;

int main(){
	list<node> mylist;
	//����ö����������ࣨ��ṹ�壩û����ʽ�Ĺ��캯����C++ �������᳢�Խ��оۺϳ�ʼ��
	//Ĭ��x,y,z��ֵ 
	mylist.push_back({1,2,3});//��β��������� 
	mylist.push_front({0,1,2}); //��ͷ��������� 
	mylist.push_back({2,3,4}); 
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	mylist.pop_back();//ɾβ 
	mylist.pop_front();//ɾͷ 
	
	node front=mylist.front();//��ȡͷ��Ԫ��
	node back=mylist.back(); //��ȡβ��Ԫ�� 
	
	//��С���Ƿ�Ϊ�� 
	cout<<"mylist.size()="<<mylist.size()<<" mylist.empty()="<<mylist.empty()<<'\n';
	
	//ָ��λ�ò�������(λ��,ֵ) mylist.insert(mylist.begin()+1,front);�ǲ��е� 
	mylist.insert(mylist.begin(),front); 
	mylist.insert(mylist.end(),back); 
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	cout<<"*********************************\n";
	//ָ��λ��ɾ������(λ��,λ��) ��Ҫ��ָ��λ����Ҫ��++��--
	//begin++��������,û�о͵�end������
	//end++�������߻���� ,--end����ǰһ��
	//erase������ҿ������ 
	//mylist.erase(++ ++mylist.begin(),++mylist.end());
	mylist.erase(++ ++mylist.begin(),--mylist.end());
	
	for(auto pos:mylist){
		cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<'\n';
	}
	cout<<"*********************************\n";
	//��� 
	mylist.clear();
	return 0;
} 
