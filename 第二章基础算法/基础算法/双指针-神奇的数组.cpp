//双指针 前缀和 异或
//神奇的数组
//https://www.lanqiao.cn/problems/3000/learning/?page=1&first_category_id=1&problem_id=3000
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+10;

int a[N];
int prv[N];
int aex[N];
/*
有个思考的点
如果两个数的和 = 两个数的异或
现在把这两个数当做二进制数
例如 010 +101 =010^101=111
例如 001 +100 =001^100=101
可以发现 想要异或 与 和相等 那么加的第二个数必须是补位
必须是 原先的和 中二进制位0的位置 被新的数补成 1
!不能产生进位!
异或的连续性 前缀和的连续性 可以考虑用了
*/

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    prv[i]=prv[i-1]+a[i];
    aex[i]=aex[i-1]^a[i];
  }
  ll ans=0;
  int r=1;
  for(int i=1;i<=n;++i){
    while(r<=n&&(prv[r]-prv[i-1])==(aex[r]^aex[i-1]))++r;
    ans+=r-i;
  }
  cout<<ans;
  //这题可以不用前缀和和异或前缀和
  //可以用res来暂存,能省一些空间
  return 0;
}
