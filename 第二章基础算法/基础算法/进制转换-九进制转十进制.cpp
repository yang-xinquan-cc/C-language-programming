//进制转换
//九进制转十进制
//https://www.lanqiao.cn/problems/2095/learning/?page=1&first_category_id=1&problem_id=2095
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  string s="2022";
  ll base=1;
  ll sum=0;
  int len=s.length();
  reverse(s.begin(),s.end());//也可以不reverse的,从头开始,每次运算for最开头sum*=16,也可以
  //后面有关字符串匹配的也会用到类似原理
  for(int i=0;i<len;++i){
    sum+=(ll)(s[i]-'0')*base;
    base*=9;
  }
  cout<<sum<<'\n';
  return 0;
}
