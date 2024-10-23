//贪心
//分糖果
//https://www.lanqiao.cn/problems/2928/learning/?page=1&first_category_id=1&problem_id=2928
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,x;
  cin>>n>>x;
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  //cout<<s<<'\n';
  string s2;//初始化的函数没有 s2=s[0]
  s2=s[0]; 
  for(int i=x;i<n;++i){
    s2+=s[i];//构造最小字符串 s2
  }
  //cout<<s2<<'\n';
  string t;
  t=s[x];//最大字符串
  if(s[0]!=s[n-1])//需要特判断,避免全部串都是一个字母
  cout<<max(t,s2);
  else {
    int sum=n/x;
    if(n%x)++sum;
    for(int i=1;i<=sum;++i)cout<<s[0];
  }
  return 0;
}
