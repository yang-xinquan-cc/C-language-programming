//数位DP
//笨笨的机器人
//https://www.lanqiao.cn/problems/3262/learning/?page=1&first_category_id=1&problem_id=3262
#include <bits/stdc++.h>
using namespace std;
//这题要么dfs,要么dp
//属于偏位运算的 数位dp
int const N=16;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  int sum=(1<<n)-1;//2的n次方是1左移n位
  //-1是0000到1111,0表示该位置数要+,1表示该位置需要减
  //就是暴力枚举每种情况
  int cnt=0,num=0;
  for(int i=0;i<=sum;++i){
    num=0;
    for(int j=1;j<=n;++j){
      if((i>>(j-1))&1)num-=a[j];//也可以if((i>>(j-1))&1)
      else num+=a[j];
    }//每次计算可以(+7-a[j])%7,也可以最后一步num%7
    if(num%7==0)++cnt;
  }
  double ans=cnt*1.0/(1<<n);
  ans=round(ans*10000)/10000;
  cout<<fixed<<setprecision(4)<<ans;
  return 0;
}
