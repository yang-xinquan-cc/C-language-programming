//双指针 排序
//聪明的小羊肖恩
//https://www.lanqiao.cn/problems/3695/learning/?page=1&first_category_id=1&problem_id=3695
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+10;
int a[N];
int n;

ll work(int num){
  int l=1,r=n;
  ll ans=0;
  while(l<r){
    while(l<r&&a[l]+a[r]>num){
      --r;
    }
    ans+=r-l;
    ++l;
  }
  return ans;
}


int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int l,r;
  cin>>n>>l>>r;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  sort(a+1,a+1+n);
  //由于统计 i,j的对数 可以排序
  //L<=ai+aj<=R可以转化为 L<=ai+aj ai+aj<=R
  //根据容斥ai+aj<=R的临界值数量-L<=ai+aj的临界值数量+1
  //就是我们要求的,要么写俩双指针
  //要么写一个双指针,传参改成l-1,这样俩临界值错开了,直接-不用+1
  cout<<work(r)-work(l-1)<<'\n';
  return 0;
}
/*
//或者暴力美学
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
ll a[N];
int main()
{
  ll x,y,z;cin>>x>>y>>z;
  for(ll i=1;i<=x;++i)cin>>a[i];
  sort(a+1,a+1+x);
  ll ans=0,left=0,right=0;
  for(int i=1;i<=x;++i)
  {
    left=y-a[i];
    right=z-a[i];
    ans+=upper_bound(a+i+1,a+x+1,right)-lower_bound(a+1+i,a+1+x,left);
  }
  cout<<ans;
  return 0;
}
*/
