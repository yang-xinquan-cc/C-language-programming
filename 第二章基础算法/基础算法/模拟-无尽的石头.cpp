//模拟 思维 动态规划
//无尽的石头
//https://www.lanqiao.cn/problems/3766/learning/?page=1&first_category_id=1&problem_id=3766
#include <bits/stdc++.h>
using namespace std;

int const N=1e6+5;
int pan[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  pan[1]=1;//本来是第0步的,但为了方便pan[i],也可以没有的,因为i+=nex-1了
  int t,nex=0;//t来暂存i,nex判断从i走下一步到哪里?
  for(int i=1;i<N;++i){//数据范围就1e6
    if(pan[i]){//比较偏动态规划,1当前节点可以推之后的节点,2当前节点由之前节点推过来的
      t=i;nex=0;
      while(t){
        nex+=t%10;
        t/=10;
      }
      pan[i+nex]=pan[i]+1;
      i+=nex-1;//pan[i],可以没有的,因为i+=nex-1了
    }
  }
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    if(pan[n]){
      cout<<pan[n]-1<<'\n';
    }else{
      cout<<"-1\n";
    }
  }
  return 0;
}
