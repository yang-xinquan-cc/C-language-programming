//����
//�������ңԶ������֮��1
/*
ħ��ʦ÷���ڿ������ٻ��� N ��������(���1~N)��ÿ���������ܴ��͵���һ�����Ϊ ai�Ĵ�����
����Ϊ�˲��Դ��������ͨ�ԣ�÷�ֽ���ܽ������ 1�Ŵ�������зɴδ��͡����㣬�ڴ��ͽ�����ܽܽ��ʱ�ڵڼ���������
�����ʽ
��һ������ 2 �������� N,k����ʾ������������Լ����ʹ�����
�ڶ������� N �����֣���ʾ��֮����������Դ�����ai λ�á�
�����ʽ
���һ��һ����������ʾ���� ��κ��ܽ���ڵ�λ��
��������
3
�������
˵��
��������Ϊ:1��2��3��2��3��
�������ݹ�ģ
[�� N �� 2 x 10',1 �� ai�� N,1 �� k�� 1018
������������C++
�������ʱ�� ��������ڴ� 1s 256M
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;

int fa[N][61];

ll ksm(int x){
  ll res=1;
  ll base=2;
  while(x){
    if(x&1)res*=base;
    base*=base;
    x>>=1;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  ll k;
  cin>>n>>k;
  for(int i=1;i<=n;++i)cin>>fa[i][0];
  for(int j=1;j<=60;++j){//1e19��longlong 8�ֽ� 2��64�η�-1 �ٸ�10 3�η�,60������
    for(int i=1;i<=n;++i){
      fa[i][j]=fa[fa[i][j-1]][j-1];
    }
  }
  int pos=1;
  int nex;
  while(k!=0){//kһ�������ö����Ʊ�ʾ
    nex=log(k)/log(2LL);//ÿ������2��nex�η�
    pos=fa[pos][nex];
    k-=ksm(nex);//֪����k����0
  }
  cout<<pos;
  return 0;
}
