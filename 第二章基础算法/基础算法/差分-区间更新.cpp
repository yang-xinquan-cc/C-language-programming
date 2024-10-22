//���
//�������
//https://www.lanqiao.cn/problems/3291/learning/?page=1&first_category_id=1&problem_id=3291
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  //����൱�� ���������ÿ���� ��ʾһ���������
  //���a[1]=1���� ԭ����� �±�1-nÿ������+1
  //���a[10]=-1���� ԭ����� �±� 10-nÿ������-1
  //��Ҫ��ԭԭ���� �ͽ���ǰ׺��
  // ��� 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0.....n
  //9��1 ����ȫ��0,�������԰�������Ϣ�򻯳� a[1]=1,a[10]=-1
  //�Ҷ�l - r ����+x�����ͱ�� a[l]+=x,a[r+1]-=x
  //��β����� ��ͨ��ǰ׺�ͻ�ԭԭ����
  //n�β���,1�β�ѯ,��ֳ�����·,��ֲ����Ե���ǰ׺�͵�������
  //����߲����߲�ѯ,��Ҫ����״����lowbit
  int n,m;
  while(cin>>n>>m){//Ҫע��ĵ��Ƕ�������,cin>>n>>m
    for(int i=1;i<=n;++i){
      cin>>a[i];
    }
    for(int i=n;i>0;--i){
      a[i]-=a[i-1];
    }
    int x,y,z;
    while(m--){
      cin>>x>>y>>z;
      a[x]+=z;
      a[y+1]-=z;
    }
    for(int i=1;i<=n;++i){
      a[i]+=a[i-1];
      cout<<a[i]<<" ";
    }
    cout<<'\n';
  }
  
  return 0;
}
