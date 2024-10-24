//贪心 特判
//体育健将
//https://www.lanqiao.cn/problems/3875/learning/?page=1&first_category_id=1&problem_id=3875
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+10;
pair<ll,ll> a[N];

//这题就贪心+特判就行
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;++i)cin>>a[i].first;
  for(int i=1;i<=n;++i)cin>>a[i].second;
  sort(a+1,a+1+n,[](pair<ll,ll> x,pair<ll,ll> y){
    return x.first+x.second<y.first+y.second;
  });
  ll sum=0;
  int ans=0,index=0;
  for(int i=1;i<=n;++i){//这里是贪心
    sum+=a[i].first;
    if(sum>k){
      sum-=a[i].first;
      index=i;
      break;
    }
    sum+=a[i].second;
  }
  ans=index-1;
  for(int i=index+1;i<=n;++i){//开始特判,找一个参赛时间短的,最多只有一个
    if(sum+a[i].first<=k){
      ++ans;
      break;
    }
  }
  cout<<ans;
  return 0;
}
