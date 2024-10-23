//贪心 排序
//鸡哥的购物挑战
//https://www.lanqiao.cn/problems/4169/learning/?page=1&first_category_id=1&problem_id=4169
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=1e5+50;
ll a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)cin>>a[i];
  sort(a+1,a+1+n,greater<ll>());
  for(int i=1;i<=n;++i)a[i]+=a[i-1];
  for(int i=2;i<=n;i+=2){
    if(a[i]<a[i-2]){
      cout<<a[i-2]<<"\n";
      return 0;
    }
  }
  if(n%2)cout<<a[n-1]<<'\n';
  else cout<<max(a[n],a[n-2])<<'\n';
  return 0;
}
