#include<bits/stdc++.h>
using namespace std;

//map mp (����Ч�ļ���)
//multimap mmp(����Ч�Ķ��ؼ���)
//unordered_map umt(����Ч�����򼯺�)
 
//map��set���ܲ��,��map��set��ȫ��
//������� �Ǹ��ʺ����Ǹ� 
 
void maptext(); 
void multimaptext();
void unordered_maptext();
int main(){
	maptext();
	//multimaptext();
	//unordered_maptext();
	return 0;
} 
void maptext(){
	map<int,string>mp;
	//�������Ϊmap=set+pair,����洢����pair,��ֵ���pair.first�� 
	mp.insert({20223141,"����"});
	cout<<mp[20223141]<<'\n';//���ݼ�ֵ���� 
	mp.erase(20223141);
	//map<int,int>mp;
	//����ͳ��ĳ���ݵĳ��ִ���
	//++map[key],ͨ��map[key]��ȡ���ֵĴ���
	if(mp.find(20223141)!=mp.end())//�Եȼ���mp.count(20223141)����0 || 1
	//mp.find ͨ��keyֵ����,����ҵ����ص�ַ,û�оͷ���mp.end() 
	{
		cout<<"mp.find(20223141)\n";
	}else{
		cout<<"mp.count==0\n";
	}
	//mp.size(),key�ж��ٸ�
	if(mp.empty()){
		cout<<"mp.empty()\n";
	}; 
	mp.insert({20223141,"��3"});
	mp.insert({20223142,"��4"});
	mp.insert({20223143,"��5"});
	mp.insert({20223144,"��6"});
	mp.insert(make_pair(20223144,"��666"));//���ʴ����pair,������map����ͨ��keyֵ����ԭ������ 
	for(auto p:mp){//�е�����,begin(),end() ,����20223144��Ӧ��Ԫ�ر���� ��666
		cout<<p.first<<" "<<p.second<<'\n';
	}
	//lower_bound(mp.begin(),mp.end(),20223143)������ôʹ��
	//lower_bound���ҵ���������֧��������ʵ�����
	//map��������������ʣ�ʵ������˫�������
	//��map���ṩ�����ĺ���
	//���ص����� ָ��,�������first��Ҫ->,�������ͨ��pair����ֱ��.���� 
	cout<<mp.lower_bound(20223143)->first<<'\n'; 
	cout<<mp.upper_bound(20223143)->first<<'\n';
	mp.clear(); 
} 
void multimaptext(){
	//�����ظ���key
	//�������������
	multimap<int,string>mp; 
	mp.insert({20223141,"��3"});
	mp.insert({20223142,"��4"});
	mp.insert({20223143,"��5"});
	mp.insert({20223144,"��6"});
	mp.insert(make_pair(20223144,"��666"));
	for(auto p:mp){
		cout<<p.first<<" "<<p.second<<'\n';
	}
	//����������mapһ�� 
}
void unordered_maptext(){
	//unordered_map<int,int>ump;
	//map����Ҫ�ľ���������,���������
	//�����û��������lower_bound��upper_bounde��
	//����ʱ�临�ӶȲ����ȶ�,����û�ù�unordered_map 
}
