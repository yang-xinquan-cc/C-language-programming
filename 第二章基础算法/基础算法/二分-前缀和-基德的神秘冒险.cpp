//二分 前缀和
//基德的神秘冒险
//https://www.lanqiao.cn/problems/4860/learning/?page=1&first_category_id=1&problem_id=4860
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=3e5+5;
int a[N];
ll b[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,q;
  cin>>n>>q;
  for(int i=1;i<=n;++i)cin>>a[i];
  sort(a+1,a+1+n);
  for(int i=1;i<=n-2;++i){
    b[i]=1LL*(n-i)*(n-i-1)/2;
    b[i]+=b[i-1];
  }
  ll k;
  ll index;
  while(q--){
    cin>>k;
    index=lower_bound(b+1,b+1+n-2,k)-b;
    cout<<a[index]<<'\n';
  }
  return 0;
}
