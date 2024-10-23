//贪心 排序
//最小化战斗力差距
//https://www.lanqiao.cn/problems/3412/learning/?page=1&first_category_id=1&problem_id=3412
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  sort(a+1,a+1+n);
  int mi=INT_MAX;
  for(int i=2;i<=n;++i){
    mi=min(mi,a[i]-a[i-1]);
  }
  cout<<mi<<'\n';
  return 0;
}
