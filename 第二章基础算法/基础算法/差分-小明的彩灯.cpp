//差分
//小明的彩灯
//https://www.lanqiao.cn/problems/1276/learning/?page=1&first_category_id=1&problem_id=1276
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=5e5+10;
ll a[N];
ll ct[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,q;
  cin>>n>>q;
  for(int i=1;i<=n;++i)cin>>a[i];
  for(int i=1;i<=n;++i)ct[i]=a[i]-a[i-1];
  int l,r;
  ll x;
  while(q--){
    cin>>l>>r>>x;
    ct[l]+=x;
    ct[r+1]-=x;
  }
  for(int i=1;i<=n;++i){
    ct[i]+=ct[i-1];
    if(ct[i]>0)cout<<ct[i]<<" ";
    else cout<<"0 ";
  }
  return 0;
}
