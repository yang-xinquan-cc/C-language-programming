//进制转换
//进制转换(n进制转m进制)
//https://www.lanqiao.cn/problems/1230/learning/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

map<char,int>mpchartonum;
map<int,char>mpinttochar;
void init(){
  mpchartonum['A']=10;mpinttochar[10]='A';
  mpchartonum['B']=11;mpinttochar[11]='B';
  mpchartonum['C']=12;mpinttochar[12]='C';
  mpchartonum['D']=13;mpinttochar[13]='D';
  mpchartonum['E']=14;mpinttochar[14]='E';
  mpchartonum['F']=15;mpinttochar[15]='F';
  for(int i=0;i<10;++i){
    mpchartonum[(char)(i+'0')]=i;
    mpinttochar[i]=(char)(i+'0');
  }
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  init();
  int t;cin>>t;
  int n,m;
  string s="",p="";
  ll sum=0,base=1;
  while(t--){
    cin>>n>>m;
    cin>>s;
    reverse(s.begin(),s.end());
    sum=0;
    base=1;
    int len=s.length();
    //n进制转m进制
    //先转成10进制,可以不翻转,for循环体里面sum*=n,然后再+
    for(int i=0;i<len;++i){
      sum+=mpchartonum[s[i]]*base;
      base*=n;
    }
    //sum变成10进制数了,现在10进制转m进制
    p="";
    while(sum){//这里注意是p=char+p,不是p=p+char,因为算的余数,就是最后的数字，不是前面的数字
      p=mpinttochar[sum%m]+p;
      sum/=m;
    }
    cout<<p<<'\n';
  }
  return 0;
}
