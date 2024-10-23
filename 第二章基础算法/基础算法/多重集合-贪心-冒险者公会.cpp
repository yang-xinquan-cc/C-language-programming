//多重集合 贪心
//冒险者公会
//https://www.lanqiao.cn/problems/3611/learning/?page=1&first_category_id=1&problem_id=3611
#include <bits/stdc++.h>
using namespace std;

int const N=1e3+5;

//这题难点在于每个勇者只能使用一次
//而且需要勇者能力正好大于等于委托难度
//不能光用数组存
multiset<int> st;
int a[N][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int m,n;
  cin>>m>>n;
  int t;
  for(int i=1;i<=m;++i){
    cin>>t;
    st.insert(t);
  }
  int mx=0;
  for(int i=1;i<=n;++i){
    cin>>a[i][0];//a[i][0]存委托数量
    mx=max(mx,a[i][0]);
    for(int j=1;j<=a[i][0];++j){
      cin>>a[i][j];
    }
    sort(a[i]+1,a[i]+1+a[i][0],greater<int>());
  }
  int sum=0;
  for(int i=1;i<=mx;++i){
    //对每个村子最大难度的委托用勇者去解决
    t=0;
    for(int j=1;j<=n;++j){
      t=max(t,a[j][i]);
    }
    //t是最大难度的委托
    auto x=lower_bound(st.begin(),st.end(),t);
    if(x==st.end()){
      cout<<-1<<'\n';
      return 0;
    }
    sum+=*x;
    st.erase(x);
  }
  cout<<sum<<'\n';
  return 0;
}
