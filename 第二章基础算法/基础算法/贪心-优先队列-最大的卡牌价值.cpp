//贪心 优先队列
//最大的卡牌价值
//https://www.lanqiao.cn/problems/3250/learning/?page=1&first_category_id=1&problem_id=3250
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=1e5+5;
ll a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,k;
  cin>>n>>k;
  priority_queue<ll>pq;//默认大根堆
  ll sum=0;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    sum+=a[i];
  }
  ll t;
  for(int i=1;i<=n;++i){
    cin>>t;
    pq.push(t-a[i]);
  }
  while(!pq.empty()&&(k--)){
    t=pq.top();
    if(t<1)break;
    sum+=t;
    pq.pop();
  }
  cout<<sum<<'\n';
  return 0;
}
