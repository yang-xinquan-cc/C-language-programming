//��ά���
//Ф����Ͷ����Ϸ��ǿ��
//https://www.lanqiao.cn/problems/3694/learning/?page=1&first_category_id=1&problem_id=3694
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=1e3+5;
ll a[N][N];
ll ct[N][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie();
  int n,m,q;
  cin>>n>>m>>q;
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      cin>>a[i][j];
    }
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      ct[i][j]=a[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
      //��ǰ��Ĺ���(�൱�ڵ�ǰ����ڸ�������������������+a[i][j])
      //������Ĺ���,��ǰ��Ҫ������a[i-1][j]��ɵ�ȫ�ֹ���
      //                  ��Ҫ�������a[i][j-1]��ɵ�ȫ�ֹ���
      //�������������ȫ�ֹ��׷���,�м�����Ӱ���ֵĶ������
      //��Ҫ�ӻ���,�м���Ӱ��ȫ�ֹ�����a[i-1][j-1]��
    }
  }
  int x1,x2,y1,y2;
  ll c;
  while(q--){
    cin>>x1>>y1>>x2>>y2>>c;
    ct[x1][y1]+=c;//����ͼ,����������,1����+c�൱��һ��������ȫ+c,��Ҫ-��ȥ
    ct[x1][y2+1]-=c;//�������Ͻ�
    ct[x2+1][y1]-=c;//�������½�
    ct[x2+1][y2+1]+=c;//���Ǽ�����������������,�м�������Ӱ���ֶ������,Ҫ+��ȥ
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      ct[i][j]+=ct[i-1][j]+ct[i][j-1]-ct[i-1][j-1];
      //ct[i][j]+=������+=,��Ϊ�Լ�Ҳ�㹱��
      //ǰ�潫������������,���ڻ�ԭ���Ƕ�άǰ׺��
      cout<<ct[i][j]<<' ';
    }
    cout<<"\n";
  }
  return 0;
}
