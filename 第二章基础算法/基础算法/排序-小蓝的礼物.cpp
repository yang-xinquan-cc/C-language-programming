//ÅÅĞò
//Ğ¡À¶µÄÀñÎï
//https://www.lanqiao.cn/problems/3792/learning/?page=1&first_category_id=1&problem_id=3792
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  sort(a+1,a+1+n);
  int sum=0;
  for(int i=1;i<=n;++i){
    sum+=a[i];
    if(sum>k){
      if(sum-a[i]/2<=k){
        cout<<i<<'\n';
        return 0;
      }else{
        cout<<i-1<<'\n';
        return 0;
      }
    }
  }
  cout<<n<<'\n';
  return 0;
}
