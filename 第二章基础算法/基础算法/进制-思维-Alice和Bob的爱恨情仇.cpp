//进制 思维
//Alice和Bob的爱恨情仇
//https://www.lanqiao.cn/problems/3865/learning/?page=1&first_category_id=1&problem_id=3865
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//主要看思维,总饼干数一定是k进制数
//因为能被k整除,k进制了
//那么k进制该数有几位数就需要几次操作(最少)
//由Alice先手,这几次操作如果是奇数,那么Alice先拿完
//这几次操作如果是奇数,那么Bob拿完
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,k;
  ll sum=0,t;
  cin>>n>>k;
  for(int i=0;i<n;++i){
    cin>>t;
    sum+=t;
  }
  if(sum%2==0){
    cout<<"Bob\n";
  }else{
    cout<<"Alice\n";
  }
  return 0;
}
