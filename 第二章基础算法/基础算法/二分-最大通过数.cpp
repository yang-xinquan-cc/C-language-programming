//二分
//最大通过数
//https://www.lanqiao.cn/problems/3346/learning/?page=1&first_category_id=1&problem_id=3346
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;
ll a[N];
ll b[N];

int n,m;
ll k;

bool check(int mid){
  int mxa=min(mid,n);//需要处理越界问题
  for(int i=0;i<=mxa;++i){
    if(mid-i<=m && a[i]+b[mid-i]<=k)return true;//需要处理越界问题
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>m>>k;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]+=a[i-1];
  }
  for(int j=1;j<=m;++j){
    cin>>b[j];
    b[j]+=b[j-1];
  }
  int l=0,r=n+m;//二分+枚举,很模板,多加个范围
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid))l=mid+1;
    else r=mid-1;
  }
  cout<<r;
  return 0;
}
