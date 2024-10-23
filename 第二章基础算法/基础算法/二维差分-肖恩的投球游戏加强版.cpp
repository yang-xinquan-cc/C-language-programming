//二维差分
//肖恩的投球游戏加强版
//https://www.lanqiao.cn/problems/3694/learning/?page=1&first_category_id=1&problem_id=3694
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=1e3+5;
ll a[N][N];
ll ct[N][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie();
  int n,m,q;
  cin>>n>>m>>q;
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      cin>>a[i][j];
    }
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      ct[i][j]=a[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
      //当前点的贡献(相当于当前点对于该正方形区域所有数据+a[i][j])
      //对区域的贡献,当前点要减少上a[i-1][j]造成的全局贡献
      //                  还要减少左边a[i][j-1]造成的全局贡献
      //减完两个区域的全局贡献发现,中间有阴影部分的多减少了
      //需要加回来,中间阴影的全局贡献是a[i-1][j-1]的
    }
  }
  int x1,x2,y1,y2;
  ll c;
  while(q--){
    cin>>x1>>y1>>x2>>y2>>c;
    ct[x1][y1]+=c;//画个图,正方形区域,1个点+c相当于一个正方形全+c,还要-回去
    ct[x1][y2+1]-=c;//减少右上角
    ct[x2+1][y1]-=c;//减少左下角
    ct[x2+1][y2+1]+=c;//又是减少两个长方形区域,中间又有阴影部分多减少了,要+回去
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      ct[i][j]+=ct[i-1][j]+ct[i][j-1]-ct[i-1][j-1];
      //ct[i][j]+=必须是+=,因为自己也算贡献
      //前面将差分数组算出来,现在还原就是二维前缀和
      cout<<ct[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}
