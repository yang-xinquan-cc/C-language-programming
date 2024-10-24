//二分
//跳石头
//https://www.lanqiao.cn/problems/364/learning/?page=1&first_category_id=1&problem_id=364
#include <bits/stdc++.h>
using namespace std;

int const N=5e4+5;
int l,n,m;
int d[N];

bool check(int chang){
  int cnt=0;
  int prv=0;
  for(int i=1;i<=n;++i){
    if(d[i]-d[prv]<chang){
      ++cnt;//需要移走当前石头
    }else{
      prv=i;//不需要移动石头,直接跳过去
    }
  }
  //不包括起点终点
  //那么终点是l
  if(l-d[prv]<chang)++cnt;//判断终点特殊情况,扔掉脚下踩着的石头
  if(cnt>m)return false;//移动石头过多,不符合要求
  return true;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>l>>n>>m;
  for(int i=1;i<=n;++i)cin>>d[i];
  int ml=1,mr=l;//最少1,最大l
  while(ml<=mr){//能快一丢丢丢
    int mid=(ml+mr)>>1;//枚举中点
    if(check(mid)==false)mr=mid-1;//false说明mid这个期望过大,需要变小
    else ml=mid+1;
  }
  cout<<ml-1<<'\n';
  return 0;
}
