//位运算
//位移
//https://www.lanqiao.cn/problems/3261/learning/?page=1&first_category_id=1&problem_id=3261
#include<bits/stdc++.h>
using namespace std;
/*
在主串中找子串 
//将num的二进制数从低到高,连续的0删去(低位置的0),高位置一定是1
//获取子串和主串的字符串(形式都是1...1) 
//将s1转化为s2，就是找s1中s2是否出现，因为在s1中未出现的s2后面多余的可以通过移动删掉
*/
string change(int num){
  string ch;
  while(num){
    if(num&1)break;//将num的二进制数从低到高，连续的0删去，
    num>>=1;
  }
  while(num){//获取子串和主串首位非0的字符串
    ch+=(num&1?'1':'0');
    num>>=1;
  }
  return ch;
}
void solve(){
  int m,n;cin>>m>>n;
  string s1=change(m),s2=change(n);
  //将s1转化为s2，就是找s1中s2是否出现，因为在s1中未出现的s2后面多余的可以通过移动删掉
  if(s1.find(s2)!=-1)cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n';
}
int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t;cin>>t;
  while(t--)solve();
  return 0;
}
