//贪心 双指针
//纪念品分组
//https://www.lanqiao.cn/problems/532/learning/?page=1&first_category_id=1&problem_id=532
#include <bits/stdc++.h>
using namespace std;

int const N=3e4+5;
int a[N];
bool vis[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int w,n;
  cin>>w>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  sort(a+1,a+1+n);
  int l=1,r=n;
  int ans=0;
  while(l<=r){
    while(a[l]+a[r]>w)--r;
    if(l==r){
      ++ans;
      vis[l]=true;
      break;
    }
    else if(l<r){
      ++ans;
      vis[l]=vis[r]=true;
      ++l;
      --r;
    }else{
      break;
    }
  }
  for(int i=n;i>0;--i){
    if(vis[i]==false){
      ++ans;
    }
  }
  cout<<ans;
  return 0;
}
/*更好的写法,不用vis
while(l<=r)
  {
    ans++;//默认右边装单独一组
    if(l==r)
    break;
    if(a[l]+a[r]>m)--r;
    else
    {
      --r;++l;
    }
  }
*/
