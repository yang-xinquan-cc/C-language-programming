//map 
//找到最多的数
//https://www.lanqiao.cn/problems/3227/learning/?page=1&first_category_id=1&problem_id=3227
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  map<int,int>mp;
  int n,m;
  cin>>n>>m;
  int t;
  int maxnum,maxcount=0;
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      cin>>t;
      ++mp[t];
      if(mp[t]>maxcount){
        maxcount=mp[t];
        maxnum=t;
      }
    }
  }
  cout<<maxnum;
  return 0;
}
