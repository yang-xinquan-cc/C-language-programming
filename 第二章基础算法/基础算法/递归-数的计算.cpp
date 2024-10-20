//递归
//数的计算
//https://www.lanqiao.cn/problems/760/learning/?page=1&first_category_id=1&problem_id=760
#include <bits/stdc++.h>
using namespace std;

int sum=0;

void getnum(int x){
  ++sum;//++sum要写在这里,想清楚输入6输出6种情况 6-63-631-62-621-61,每次刚进入递归时加一种
  for(int i=x/2;i>=1;--i){//递归重要的是截止(退出递归)条件,这里是i>=1,如果已经等于1了,那x/2等于0,循环截止
    getnum(i);
  }
}
/*
递归最重要的是
1 截止条件
2 通过递归求什么值
*/
int main()
{
  int n;
  cin>>n;
  getnum(n);
  cout<<sum<<'\n';
  return 0;
}
