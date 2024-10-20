//枚举-模拟(可以用bfs或者dfs)
//灌溉
//https://www.lanqiao.cn/problems/551/learning/?page=1&first_category_id=1&problem_id=551
#include <bits/stdc++.h>
using namespace std;

int const N=105;
int a[N][N];//灌溉前和后是两种情况,如果只用一个数组无法实现
int b[N][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  int t;
  cin>>t;
  int r,c;
  while(t--){
    cin>>r>>c;
    ++a[r][c];
  }
  int k;
  cin>>k;
  while(k--){
    for(int i=1;i<=n;++i){
      for(int j=1;j<=m;++j){
        if(a[i][j]){
          b[i][j]=1;//中
          b[i-1][j]=1;//上
          b[i][j-1]=1;//左
          b[i][j+1]=1;//右
          b[i+1][j]=1;//下
        }
      }
    }
    for(int i=1;i<=n;++i){
      for(int j=1;j<=m;++j){
        if(b[i][j]){
          a[i][j]=1;
        }
      }
    }
  }
  int sum=0;
  for(int i=1;i<=n;++i){
      for(int j=1;j<=m;++j){
        if(b[i][j])++sum;
    }
  }
  cout<<sum<<'\n';
  return 0;
}
