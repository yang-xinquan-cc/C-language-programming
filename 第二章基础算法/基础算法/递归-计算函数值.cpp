//递归
//计算函数值
//根据题目要求就行
#include <bits/stdc++.h>
using namespace std;

int getnum(int x){
  if(x==0)return 1;
  if(x%2==0)return getnum(x/2);
  else return 1+getnum(x/2);
}
/*
神秘函数 S(x) 的定义如下：
当 x为 0时，S(0)=1
当 x 为偶数时，S(x)=S(x/2)
当 x为奇数时，S(x)=S(x?1)+1
你需要编写一个程序，计算给定正整数 
x神秘函数S(x) 的值。

输入格式
输入包含一个正整数 x(1≤x≤1e6)
输出格式
输出一个整数，表示神秘函数S(x) 的值
*/
int main()
{
  int x;
  cin>>x;
  cout<<getnum(x)<<'\n';
  return 0;
}
