//双指针
//挑选子串
//https://www.lanqiao.cn/problems/1621/learning/?page=1&first_category_id=1&problem_id=1621
#include <bits/stdc++.h>
using namespace std;
using ll=long long;//用longlong怕爆了而已

int const N=2e3+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m,k;
  cin>>n>>m>>k;
  int t;
  for(int i=1;i<=n;++i){
    a[i]=a[i-1];//前缀和
    cin>>t;
    if(t>=m){//只记录有效数据
      ++a[i];
    }
  }
  int l=1,r=1;
  ll ans=0;
  while(l<=r&&r<=n){//双指针,时间复杂度2n
    while(r<=n&&a[r]-a[l-1]<k){
      ++r;//说明范围小了
    }
    if(a[r]-a[l-1]>=k){
      ans+=(n-r+1);
      //满足条件从l到r有k个数大于等于m
      //从r-n共n-r+1个子串满足(俗称贡献)
    }else{
      break;
    }
    ++l;
  }
  cout<<ans<<'\n';
  return 0;
}
