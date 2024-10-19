//map
//小明和完美序列
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
    cin>>a;//统计关键字a出现的次数,用map最为合适
    ++mp[a];
  }
  int sum=0;
  for(auto p:mp){
    if(p.second>p.first){//要么出现次数大于key值,只需要删除超过key的个数
      sum+=p.second-p.first;
    }else if(p.first>p.second){//要么小于key,需要全部删掉,不能直接写成else,避免相等的时候sum多加了
      sum+=p.second;
    }
  }
  cout<<sum;
  return 0;
}
