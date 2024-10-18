#include<bits/stdc++.h>
using namespace std;

//map mp (更高效的集合)
//multimap mmp(更高效的多重集合)
//unordered_map umt(更高效的无序集合)
 
//map和set功能差不多,但map比set更全面
//具体的题 那个适合用那个 
 
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
	//可以理解为map=set+pair,里面存储的是pair,键值变成pair.first了 
	mp.insert({20223141,"张三"});
	cout<<mp[20223141]<<'\n';//根据键值索引 
	mp.erase(20223141);
	//map<int,int>mp;
	//可以统计某数据的出现次数
	//++map[key],通过map[key]获取出现的次数
	if(mp.find(20223141)!=mp.end())//略等价于mp.count(20223141)返回0 || 1
	//mp.find 通过key值查找,如果找到返回地址,没有就返回mp.end() 
	{
		cout<<"mp.find(20223141)\n";
	}else{
		cout<<"mp.count==0\n";
	}
	//mp.size(),key有多少个
	if(mp.empty()){
		cout<<"mp.empty()\n";
	}; 
	mp.insert({20223141,"张3"});
	mp.insert({20223142,"张4"});
	mp.insert({20223143,"张5"});
	mp.insert({20223144,"张6"});
	mp.insert(make_pair(20223144,"张666"));//本质存的是pair,单纯的map可以通过key值覆盖原本数据 
	for(auto p:mp){//有迭代器,begin(),end() ,发现20223144对应的元素变成了 张666
		cout<<p.first<<" "<<p.second<<'\n';
	}
	//lower_bound(mp.begin(),mp.end(),20223143)不能这么使用
	//lower_bound查找的是有序，且支持随机访问的容器
	//map表面是是随机访问，实际上是双向迭代器
	//但map有提供这俩的函数
	//返回迭代器 指针,故想访问first需要->,如果是普通的pair可以直接.出来 
	cout<<mp.lower_bound(20223143)->first<<'\n'; 
	cout<<mp.upper_bound(20223143)->first<<'\n';
	mp.clear(); 
} 
void multimaptext(){
	//容许重复的key
	//做题基本遇不到
	multimap<int,string>mp; 
	mp.insert({20223141,"张3"});
	mp.insert({20223142,"张4"});
	mp.insert({20223143,"张5"});
	mp.insert({20223144,"张6"});
	mp.insert(make_pair(20223144,"张666"));
	for(auto p:mp){
		cout<<p.first<<" "<<p.second<<'\n';
	}
	//其他函数和map一样 
}
void unordered_maptext(){
	//unordered_map<int,int>ump;
	//map最重要的就是有序了,无序很少用
	//无序就没迭代器和lower_bound和upper_bounde了
	//而且时间复杂度并不稳定,基本没用过unordered_map 
}
