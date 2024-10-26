//倍增 极限
//数的变换
/*
数的变换
问题描述
给的 A,B,C,Q，进行以下操作 Q 次:
将A变为[A/B」(向下取整)+C.
请你输出 Q 次操作后 A 的权值。
输入格式
第一行包含 4个正整数 A,B,C,Q.
输出格式
输出共 1行，包含1个整数，表示最终答案。
样例输入
5 2 1 1
样例输出
3
*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;//求极限是2e5
ll arr[N][25];


int main()
{
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b==1){
    cout<<a+c*d<<'\n';
    return 0;
  }
  for(int i=0;i<N;++i)arr[i][0]=i/b+c;//预处理0次方的值
  for(int j=1;j<25;++j){//倍增的套路
    for(int i=0;i<N;++i){
      arr[i][j]=arr[arr[i][j-1]][j-1];
    }
  }
  int index=0;
  while(d){//将d转成二进制的形式
    if(d&1)a=arr[a][index];
    ++index;
    d>>=1;
  }
  cout<<a<<'\n';//时间复杂度Nlog(N)
  //时间主要在倍增处理N个数,前面是N,后面这个while就log（d）
  return 0;
}
