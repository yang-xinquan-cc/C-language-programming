//位运算 异或前缀和
//简单的异或难题
//https://www.lanqiao.cn/problems/3217/learning/?page=1&first_category_id=1&problem_id=3217
#include <bits/stdc++.h>
using namespace std;
int const N=1e5+5;

int a[N];//这题关键是奇数和偶数的差别,就再异或一次就行

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]^=a[i-1];
  }
  int l,r;
  while(m--){
    cin>>l>>r;
    cout<<(a[r]^a[l-1])<<'\n';
  }
  return 0;
}
