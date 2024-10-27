//dfs
//笨笨的机器人
//https://www.lanqiao.cn/problems/3262/learning/?page=1&first_category_id=1&problem_id=3262
#include <bits/stdc++.h>
using namespace std;
//这题要么dfs,要么dp
//属于偏位运算的 数位dp
int const M=7;
int const N=16;
int a[N];
int ans,cnt;
int n;

void dfs(int pos,int num){
  if(pos==n){
    ++ans;
    if(num==0){
      ++cnt;
    }
    return;
  }
  dfs(pos+1,(num+a[pos+1]+M)%M);
  dfs(pos+1,(num-a[pos+1]+M)%M);
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  dfs(0,0);
  double num=cnt*1.0/ans;
  num=round(num*10000)/10000;
  cout<<fixed<<setprecision(4)<<num;
  return 0;
}
