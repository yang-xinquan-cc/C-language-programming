//位运算 暴力
//小蓝学位运算
//https://www.lanqiao.cn/problems/3220/learning/?page=1&first_category_id=1&problem_id=3220
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll const MOD=1e9+7;
int const N=1e6+10;
ll a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]^=a[i-1];
  }
  ll ans=1;
  ll t;
  for(int i=1;i<=n;++i){
    for(int j=i;j<=n;++j){
      t=(a[j]^a[i-1]);
      if(t==0){
        cout<<0;
        return 0;
      }
      ans=(ans*t)%MOD;
    }
  }
  cout<<ans;
  return 0;
}
