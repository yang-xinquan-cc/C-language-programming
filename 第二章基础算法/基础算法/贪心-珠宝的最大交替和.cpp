//贪心
//珠宝的最大交替和
//https://www.lanqiao.cn/problems/3791/learning/?page=1&first_category_id=1&problem_id=3791
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=1e5+50;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  ll t,sum=0;
  ll mi=INT_MAX,mx=INT_MIN;
  for(int i=1;i<=n;++i){
    cin>>t;
    t=abs(t);
    if(i&1){
      sum+=t;
      mi=min(mi,t);
    }
    else{
      sum-=t;
      mx=max(mx,t);
    }
  }
  //有一次操作的机会,那就算+的最小和-的最大的进行替换
  //记得是两倍
  if(mx>mi){
    sum+=2*(mx-mi);
  }
  cout<<sum<<'\n';
  return 0;
}
