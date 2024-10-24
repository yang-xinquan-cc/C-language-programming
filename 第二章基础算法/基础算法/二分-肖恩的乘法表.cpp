//二分
//肖恩的乘法表
//https://www.lanqiao.cn/problems/3404/learning/?page=1&first_category_id=1&problem_id=3404
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,m,k;


bool check(ll mid){
  ll sum=0;
  for(int i=1;i<=n;++i){
    sum+=min(mid/i,m);//小于等于,需要min,每行最多m个
  }
  if(sum>=k)return true;//当mid期望在表中小于等于的数大于k,说明mid是大于等于期望的
  return false;
}

int main()
{
  cin>>n>>m>>k;
  ll l=1,r=k;
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid))r=mid-1;//mid是大于等于,是第k大的
    else l=mid+1;
  }
  cout<<l;
  return 0;
}
