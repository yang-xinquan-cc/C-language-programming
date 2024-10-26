//构造
//小浩的ABC
//https://www.lanqiao.cn/problems/4133/learning/?page=1&first_category_id=1&problem_id=4133
#include <bits/stdc++.h>
using namespace std;
using ll=long long; 

int main()
{
  int t;
  cin>>t;
  ll x,a,b,c;
  ll m=1e6;
  while(t--){
    cin>>x;
    if(x==1){
      cout<<-1<<'\n';
      continue;
    }
    if(x>m){
      a=m;
    }else{
      a=x-1;
    }
    b=max(1LL,x/m);
    c=x-a*b;
    cout<<a<<" "<<b<<" "<<c<<"\n";
  }
  return 0;
}
