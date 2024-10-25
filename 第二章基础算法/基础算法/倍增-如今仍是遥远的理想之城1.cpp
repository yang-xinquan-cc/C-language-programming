//倍增
//如今仍是遥远的理想之城1
/*
魔法师梅林在卡美洛召唤了 N 个传送阵(编号1~N)，每个传送阵都能传送到另一个编号为 ai的传送阵。
现在为了测试传送阵的连通性，梅林将关芙丢进了 1号传送阵进行飞次传送。问你，在传送结束后，芙芙此时在第几个传送阵。
输入格式
第一行输入 2 个正整数 N,k，表示传送阵的数量以及传送次数。
第二行输入 N 个数字，表示第之个传送阵可以传送至ai 位置。
输出格式
输出一行一个整数，表示传送 ん次后关芙所在的位置
样例输入
3
样例输出
说明
样例含义为:1→2→3→2→3。
评测数据规模
[≤ N ≤ 2 x 10',1 ≤ ai≤ N,1 ≤ k≤ 1018
运行限制语言C++
最大运行时间 最大运行内存 1s 256M
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;

int fa[N][61];

ll ksm(int x){
  ll res=1;
  ll base=2;
  while(x){
    if(x&1)res*=base;
    base*=base;
    x>>=1;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  ll k;
  cin>>n>>k;
  for(int i=1;i<=n;++i)cin>>fa[i][0];
  for(int j=1;j<=60;++j){//1e19是longlong 8字节 2的64次方-1 少个10 3次方,60够用了
    for(int i=1;i<=n;++i){
      fa[i][j]=fa[fa[i][j-1]][j-1];
    }
  }
  int pos=1;
  int nex;
  while(k!=0){//k一定可以用二进制表示
    nex=log(k)/log(2LL);//每次能走2的nex次方
    pos=fa[pos][nex];
    k-=ksm(nex);//知道把k减到0
  }
  cout<<pos;
  return 0;
}
