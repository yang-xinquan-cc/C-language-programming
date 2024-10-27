//位运算
//最小的或运算
//https://www.lanqiao.cn/problems/4900/learning/?page=1&first_category_id=1&problem_id=4900
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  ll a,b;
  cin>>a>>b;
  ll sum=a|b;
  ll temp=sum&a&b;
  //cout<<sum-temp;
  //想的快可以直接异或
  cout<<(a^b);
  return 0;
}
