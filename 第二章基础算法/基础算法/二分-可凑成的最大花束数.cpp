//二分
//可凑成的最大花束数
//https://www.lanqiao.cn/problems/3344/learning/?page=1&first_category_id=1&problem_id=3344
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;
ll a[N];
ll n,k;

bool check(ll mid){//能打包mid个
  ll sum=0;
  for(int i=1;i<=n;++i){
    sum+=min(a[i],mid);//每种花最多提供mid,最少提供a[i]
    //相当于a[i]这种花放在每一个包里(mid)
  }
  //每一个包里(mid)不断地往上铺,如果总数大于需要的mid*k说明满足条件
  if(sum>=mid*k)return true;//满足条件的花是一层一层铺上去的
  return false;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>k;
  ll sum=0;
  //最少打包0个,最多吧全部花打包
  for(int i=1;i<=n;++i){
    cin>>a[i];
    sum+=a[i];  
  }
  ll l=0,r=sum/k;
  while(l<=r){//二分期望(答案)
    ll mid=(l+r)>>1;
    if(check(mid))l=mid+1;
    else r=mid-1;
  }
  cout<<r;
  return 0;
}
