//���� ����
//���ı任
/*
���ı任
��������
���� A,B,C,Q���������²��� Q ��:
��A��Ϊ[A/B��(����ȡ��)+C.
������� Q �β����� A ��Ȩֵ��
�����ʽ
��һ�а��� 4�������� A,B,C,Q.
�����ʽ
����� 1�У�����1����������ʾ���մ𰸡�
��������
5 2 1 1
�������
3
*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;//������2e5
ll arr[N][25];


int main()
{
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b==1){
    cout<<a+c*d<<'\n';
    return 0;
  }
  for(int i=0;i<N;++i)arr[i][0]=i/b+c;//Ԥ����0�η���ֵ
  for(int j=1;j<25;++j){//��������·
    for(int i=0;i<N;++i){
      arr[i][j]=arr[arr[i][j-1]][j-1];
    }
  }
  int index=0;
  while(d){//��dת�ɶ����Ƶ���ʽ
    if(d&1)a=arr[a][index];
    ++index;
    d>>=1;
  }
  cout<<a<<'\n';//ʱ�临�Ӷ�Nlog(N)
  //ʱ����Ҫ�ڱ�������N����,ǰ����N,�������while��log��d��
  return 0;
}
