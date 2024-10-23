//差分
//泡澡
// 
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+10;
//这题需要注意的就 [S,T)左闭右开的
ll ct[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  ll w;
  cin>>n>>w;
  ll s,t,p;
  for(int i=1;i<=n;++i){
    cin>>s>>t>>p;
    ct[s]+=p;
    ct[t]-=p;
  }
  for(int i=0;i<N;++i){
    if(i)ct[i]+=ct[i-1];
    if(ct[i]>w){
      cout<<"No\n";
      return 0;
    }
  }
  cout<<"Yes\n";
  return 0;
}
