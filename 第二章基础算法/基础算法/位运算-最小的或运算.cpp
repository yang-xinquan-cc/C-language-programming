//λ����
//��С�Ļ�����
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
  //��Ŀ����ֱ�����
  cout<<(a^b);
  return 0;
}
