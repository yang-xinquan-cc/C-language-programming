//双指针
//回文判定
//https://www.lanqiao.cn/problems/1371/learning/?page=1&first_category_id=1&problem_id=1371
#include <bits/stdc++.h>
using namespace std;

//这题用别的方法也可以解决
//但练习练习双指针

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;
  cin>>s;
  int len=s.length();
  int l=0,r=len-1;
  while(l<r){
    if(s[l]!=s[r]){
      cout<<"N\n";
      return 0;
    }
    ++l,--r;
  }
  cout<<"Y\n";
  return 0;
}
