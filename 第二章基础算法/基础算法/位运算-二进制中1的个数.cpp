//位运算
//二进制中 1 的个数
//https://www.lanqiao.cn/problems/1331/learning/?page=1&first_category_id=1&problem_id=1331
#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned int t;cin>>t;
  //t=abs(t);错的
  //t=t+((t<0)?4294967296:0);
  //这个刷题网页 对 long long 不太兼容
  //我用 long long 也是没过
  int ans=0;
  while(t)
  {
    ans+=t&1;
    t>>=1;
  }
  cout<<ans;
  return 0;
}
