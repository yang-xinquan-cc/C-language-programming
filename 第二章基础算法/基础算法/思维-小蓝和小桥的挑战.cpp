//思维
//小蓝和小桥的挑战
//https://www.lanqiao.cn/problems/3238/learning/?page=1&first_category_id=1&problem_id=3238
#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int sum=0;
  int zero=0;//乘积包包得爆了,这题要求很简单,只有0乘任何数才会乘积为0,所以统计0就行
  int t,n,ai;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<=n;++i){
      cin>>ai;
      sum+=ai;
      if(ai==0)++zero,++sum;
    }
    if(sum==0)++zero;
    cout<<zero<<'\n';
    sum=0;
    zero=0;
  }
  
  return 0;
}
