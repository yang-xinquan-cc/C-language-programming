//˼ά
//С����С�ŵ���ս
//https://www.lanqiao.cn/problems/3238/learning/?page=1&first_category_id=1&problem_id=3238
#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int sum=0;
  int zero=0;//�˻������ñ���,����Ҫ��ܼ�,ֻ��0���κ����Ż�˻�Ϊ0,����ͳ��0����
  int t,n,ai;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<=n;++i){
      cin>>ai;
      sum+=ai;
      if(ai==0)++zero,++sum;
    }
    if(sum==0)++zero;
    cout<<zero<<'\n';
    sum=0;
    zero=0;
  }
  
  return 0;
}
