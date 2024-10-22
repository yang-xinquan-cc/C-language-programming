//差分
//区间更新
//https://www.lanqiao.cn/problems/3291/learning/?page=1&first_category_id=1&problem_id=3291
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  //差分相当于 用数组里的每个数 表示一个区间的数
  //如果a[1]=1代表 原数组从 下标1-n每个数都+1
  //如果a[10]=-1代表 原数组从 下标 10-n每个数都-1
  //想要还原原数组 就进行前缀和
  // 变成 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0.....n
  //9个1 后面全是0,这样可以把区间信息简化成 a[1]=1,a[10]=-1
  //且对l - r 进行+x操作就变成 a[l]+=x,a[r+1]-=x
  //多次操作后 再通过前缀和还原原数组
  //n次操作,1次查询,差分常见套路,差分差不多可以当做前缀和的逆运算
  //如果边操作边查询,需要用树状数组lowbit
  int n,m;
  while(cin>>n>>m){//要注意的点是多组数据,cin>>n>>m
    for(int i=1;i<=n;++i){
      cin>>a[i];
    }
    for(int i=n;i>0;--i){
      a[i]-=a[i-1];
    }
    int x,y,z;
    while(m--){
      cin>>x>>y>>z;
      a[x]+=z;
      a[y+1]-=z;
    }
    for(int i=1;i<=n;++i){
      a[i]+=a[i-1];
      cout<<a[i]<<" ";
    }
    cout<<'\n';
  }
  
  return 0;
}
