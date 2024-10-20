//map 模拟 思维
//DNA序列修正
//https://www.lanqiao.cn/problems/3904/learning/?page=1&first_category_id=1&problem_id=3904
#include <bits/stdc++.h>
using namespace std;

char getchar(char c){
  if(c=='A')return 'T';
  if(c=='T')return 'A';
  if(c=='C')return 'G';
  if(c=='G')return 'C';
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  map<pair<char,char>,int>mp;//存序列
  for(int i=0;i<n;++i){
    if(a[i]!=getchar(b[i]))//不同再存
      ++mp[{a[i],b[i]}];
  }
  int sum=0,mi;
  char c,d;
  for(auto &p:mp){//这里需用用&(引用),不用引用的相当于 int a:vt 更改的是形参
    c=getchar(p.first.second);
    d=getchar(p.first.first);
    mi=min(mp[{c,d}],p.second);
    sum+=mi;
    mp[{c,d}]-=mi;//能互相交换然后减少操作次数,本来更改两个字符的操作变成一次交换的操作
    p.second-=mi;
  }
  for(auto &p:mp){
    sum+=p.second;
  }
  cout<<sum;
  return 0;
}
