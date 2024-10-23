//动态规划
//明日方舟大作战
//https://www.lanqiao.cn/problems/4049/learning/?page=1&first_category_id=1&problem_id=4049
#include <bits/stdc++.h>
using namespace std;

int const N=1e4+50;
int dp[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m,b;
  cin>>n>>m>>b;
  int at,co,t;
  for(int i=1;i<=n;++i){
    cin>>at>>co;
    for(int j=b;j>=co;--j){
      dp[j]=max(dp[j],dp[j-co]+at);
    }//01背包
  }
  int mx=0;
  for(int i=1;i<=m;++i){
    cin>>t;
    mx=max(mx,t);
  }
  if(dp[b]==0){
    cout<<-1<<'\n';
    return 0;
  }
  cout<<ceil(mx*1.0/dp[b])<<'\n';
  return 0;
}
