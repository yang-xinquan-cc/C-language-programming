//map
//С������������
//https://www.lanqiao.cn/problems/3199/learning/?page=1&first_category_id=1&name=%E5%B0%8F%E6%98%8E%E5%92%8C%E5%AE%8C%E7%BE%8E%E5%BA%8F%E5%88%97
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  map<int,int>mp;
  int n;
  cin>>n;
  int a;
  for(int i=0;i<n;++i){
    cin>>a;//ͳ�ƹؼ���a���ֵĴ���,��map��Ϊ����
    ++mp[a];
  }
  int sum=0;
  for(auto p:mp){
    if(p.second>p.first){//Ҫô���ִ�������keyֵ,ֻ��Ҫɾ������key�ĸ���
      sum+=p.second-p.first;
    }else if(p.first>p.second){//ҪôС��key,��Ҫȫ��ɾ��,����ֱ��д��else,������ȵ�ʱ��sum�����
      sum+=p.second;
    }
  }
  cout<<sum;
  return 0;
}
