//前缀和 位运算
//区间或
//https://www.lanqiao.cn/problems/3691/learning/?page=1&first_category_id=1&problem_id=3691
#include <bits/stdc++.h>
using namespace std;
int const N=1e5+10;

int dp[N][21];//第 i 位置(ai) 二进制第j 位的次数

void getdata(int pos,int num){//把num拆成二进制
  int index=0;
  while(num){
    if(num&1)++dp[pos][index];
    num>>=1;
    ++index;
  }
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,q;
  cin>>n>>q;
  int t;
  for(int i=1;i<=n;++i){
    cin>>t;
    getdata(i,t);
  }
  //预处理
  for(int i=1;i<=n;++i){
    for(int j=0;j<21;++j){
      dp[i][j]+=dp[i-1][j];//算二进制j位置的次数的前缀和
    }
  }
  int l,r;
  while(q--){
    cin>>l>>r;
    int num=0;
    for(int j=0;j<21;++j){
      if(dp[r][j]>dp[l-1][j]){//前缀和作差也可以,看该位置是否+1
        num+=(1<<j);
      }
    }
    cout<<num<<'\n';
  }
  return 0;
}
