//���� ˼ά
//Alice��Bob�İ������
//https://www.lanqiao.cn/problems/3865/learning/?page=1&first_category_id=1&problem_id=3865
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//��Ҫ��˼ά,�ܱ�����һ����k������
//��Ϊ�ܱ�k����,k������
//��ôk���Ƹ����м�λ������Ҫ���β���(����)
//��Alice����,�⼸�β������������,��ôAlice������
//�⼸�β������������,��ôBob����
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
