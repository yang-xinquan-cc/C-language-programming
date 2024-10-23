//双指针
//美丽的区间
//https://www.lanqiao.cn/problems/1372/learning/?page=1&first_category_id=1&problem_id=1372
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+50;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,s;
  cin>>n>>s;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]+=a[i-1];
  }
  int len=n+1;
  /*前缀和 然后枚举 左端点 然后右指针很容易想到,关键是左指针
  for(int i=1;i<=n;++i){
    int l=i,r=n;
    while(l<=r&&a[r]-a[l-1]>=s){
      len=min(len,r-l+1);
      --r;
    }
  }*/
  int l=1,r=1;//时间复杂度最高2n
  while(r<=n&&l<=r){
    while(r<=n&&a[r]-a[l-1]<s){
      ++r;
    }
    if(a[r]-a[l-1]>=s){
      len=min(len,r-l+1);
    }else{
      break;
    }
    ++l;
  }
  if(len<=n)
  cout<<len;
  else
  cout<<0;
  return 0;
}
