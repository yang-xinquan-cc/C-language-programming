//λ����
//�������� 1 �ĸ���
//https://www.lanqiao.cn/problems/1331/learning/?page=1&first_category_id=1&problem_id=1331
#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned int t;cin>>t;
  //t=abs(t);���
  //t=t+((t<0)?4294967296:0);
  //���ˢ����ҳ �� long long ��̫����
  //���� long long Ҳ��û��
  int ans=0;
  while(t)
  {
    ans+=t&1;
    t>>=1;
  }
  cout<<ans;
  return 0;
}
