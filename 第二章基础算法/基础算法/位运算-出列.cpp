//位运算
//出列
//https://www.lanqiao.cn/problems/3223/learning/?page=1&first_category_id=1&problem_id=3223
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int t=a; 
  int num=1;
  while(num<=t){
    a>>=1;
    num<<=1;
  }
  cout<<(num>>=1);
  return 0;
}
