//快速幂
//快速幂
//https://www.lanqiao.cn/problems/1514/learning/?page=1&first_category_id=1&problem_id=1514
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//快速幂
ll b,p,k;

ll ksm(ll a,ll b){
  ll res=1;
  while(b){
    if(b&1)res=res*a%k;
    a=a*a%k;
    b>>=1;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>b>>p>>k;
  cout<<ksm(b,p)<<'\n';
  return 0;
}
