//˫ָ�� ǰ׺�� ���
//���������
//https://www.lanqiao.cn/problems/3000/learning/?page=1&first_category_id=1&problem_id=3000
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+10;

int a[N];
int prv[N];
int aex[N];
/*
�и�˼���ĵ�
����������ĺ� = �����������
���ڰ���������������������
���� 010 +101 =010^101=111
���� 001 +100 =001^100=101
���Է��� ��Ҫ��� �� ����� ��ô�ӵĵڶ����������ǲ�λ
������ ԭ�ȵĺ� �ж�����λ0��λ�� ���µ������� 1
!���ܲ�����λ!
���������� ǰ׺�͵������� ���Կ�������
*/

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    prv[i]=prv[i-1]+a[i];
    aex[i]=aex[i-1]^a[i];
  }
  ll ans=0;
  int r=1;
  for(int i=1;i<=n;++i){
    while(r<=n&&(prv[r]-prv[i-1])==(aex[r]^aex[i-1]))++r;
    ans+=r-i;
  }
  cout<<ans;
  //������Բ���ǰ׺�ͺ����ǰ׺��
  //������res���ݴ�,��ʡһЩ�ռ�
  return 0;
}
