//ö��
//�ر����ĺ�
//https://www.lanqiao.cn/problems/191/learning/?page=1&first_category_id=1&problem_id=191
#include <bits/stdc++.h>
using namespace std;

//ö�پ���ö�����н�ռ�
//���п��ܵ�ֵ

inline bool check(int x){
  int t;
  while(x){
    t=x%10;
    x/=10;
    if(t==0||t==1||t==2||t==9)return true;
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int sum=0;
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    if(check(i)){
      sum+=i;
    }  
  }
  cout<<sum<<'\n';
  return 0;
}
