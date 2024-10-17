#include<bits/stdc++.h>
using namespace std;

//set st����
//multiset mst���ؼ���
//unordered_set ust���򼯺�
 
void settext(); 
void multisettext();
void unordered_settext();
int main(){
	//settext();
	/*
	��Щ��
	���ֻ��ά�������Сֵ:�Ƽ���priority_queue
	����õ���������ĳЩ�ض���ֵ:�Ƽ���set 
	*/
	//multisettext();
	unordered_settext();
	return 0;
} 

void settext(){
	set<int> st;
	st.insert(5);//����Ԫ�� 
	st.insert(5);//����,����Ҫ���ص���ȥ�� 
	st.insert(15);
	st.insert(25);
	cout<<"st.size()="<<st.size()<<'\n';
	for(auto x:st){
		cout<<x<<" ";
	}
	cout<<"\n"; 
	//st.find(5) ���ص��ǵ�����,����ҵ����ض�Ӧ�ĵ�����,û�ҵ��ͷ���st.end() 
	if(st.find(5)!=st.end()){
		cout<<"st.find(5)="<<*st.find(5)<<'\n';
	}else{
		cout<<"st.find(5)=st.end()\n";
	}
	st.erase(5);//ɾ����ֵΪ5��Ԫ��
	if(st.find(5)!=st.end()){
		cout<<"st.find(5)="<<*st.find(5)<<'\n';
	}else{
		cout<<"st.find(5)=st.end()\n";
	}
	//���ڼ��ϵײ��Ǻ����(����ƽ��������)����Ĵ洢
	//������O(log(n))��ʱ��������,ɾ��,���
	//Ҳ������lower_bound,upper_bound ���ض�Ӧ�ĵ����� 
	//�����������Ĭ��less<int> Ҳ�������ó�greater<int>
	//Ҳ������priority_queue���Զ����������һ��,дһ����Ȼ������()����α��������
	//set<int,cmp> st; 
}

void multisettext(){
	multiset<int> mst;
	//�ص��������ظ�Ԫ��,�����ĺ�����setһ��
	//��Ҫע��ĵ���multisetʱ��lower_bound��upper_boundʱ,���ص���һ�����������ĵ�ַ 
	mst.insert(5);//����Ԫ�� 
	mst.insert(5);//����,����Ҫ���ص���ȥ�� 
	mst.insert(15);
	mst.insert(25);
	cout<<"mst.size()="<<mst.size()<<'\n';//4
	for(auto x:mst){
		cout<<x<<" ";//5 5 15 25
	}
	cout<<"\n";
}

void unordered_settext(){
	//���򼯺�
	//��Ҫ������򼯺�,�Ƽ���ȥ��� Ͱ���� 
	//���Ǹ�1e6�Ŀռ�,�����ӦԪ�ش�����+1,���Լ�¼�ü�ֵ���ֵĴ���
	//unordered_set���ܼ�¼���� 
	//Ͱ�������� ���򼯺�����Ͱ,����̫һ��
	//�õĹ�ϣֵ,����˵���ݷ�Χ��1e9��,����������1e6��
	//��ʱ������Ͱ����,�ڴ治��
	//�ù�ϣֵ���Ա�������������
	//���ض���ֵ�����ض�ֵ
	//�����������ʱ�򣬻���ֹ�ϣ��ͻ
	unordered_set<int> ust;
	for(int i=1;i<=100000;++i){
		ust.insert(i*5+i*50);
	}
	ust.erase(55);
	ust.insert(110);
	cout<<"ust.count(110)="<<ust.count(110)<<'\n';//Ч����find��� 
	cout<<"ust.size()="<<ust.size()<<'\n';
	if(ust.find(55)!=ust.end()){
		cout<<"ust.find(55)\n";
	}else{
		cout<<"ustû�ҵ�find(55)\n";
	}
}
