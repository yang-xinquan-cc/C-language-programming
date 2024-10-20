//进制转换
//进制
//https://www.lanqiao.cn/problems/2489/learning/?page=1&first_category_id=1&problem_id=2489
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
//这题16进制转10进制大概要爆int
//如果爆__int 128需要用高精度,或者因为这题是填空题,用python更好

ll getnum(char c){//这么写依然有点麻烦,可以考虑用map
  if(c=='A')return 10;
  if(c=='B')return 11;
  if(c=='C')return 12;
  if(c=='D')return 13;
  if(c=='E')return 14;
  if(c=='F')return 15;
  return (ll)(c-'0');
}

map<char,ll>mp;
void init(){
  mp['A']=10;
  mp['B']=11;
  mp['C']=12;
  mp['D']=13;
  mp['E']=14;
  mp['F']=15;
  for(int i=0;i<10;++i){
    mp[(char)(i+'0')]=i;
  }
}

int main()
{
  init();
  string s="2021ABCD";
  reverse(s.begin(),s.end());
  int len=s.length();
  ll sum=0;
  ll base=1;
  for(int i=0;i<len;++i){
    //sum+=getnum(s[i])*base;
    sum+=mp[s[i]]*base;
    base*=16;
  }
  cout<<sum<<'\n';
  return 0;
}
