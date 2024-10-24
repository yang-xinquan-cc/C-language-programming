//����
//��ʯͷ
//https://www.lanqiao.cn/problems/364/learning/?page=1&first_category_id=1&problem_id=364
#include <bits/stdc++.h>
using namespace std;

int const N=5e4+5;
int l,n,m;
int d[N];

bool check(int chang){
  int cnt=0;
  int prv=0;
  for(int i=1;i<=n;++i){
    if(d[i]-d[prv]<chang){
      ++cnt;//��Ҫ���ߵ�ǰʯͷ
    }else{
      prv=i;//����Ҫ�ƶ�ʯͷ,ֱ������ȥ
    }
  }
  //����������յ�
  //��ô�յ���l
  if(l-d[prv]<chang)++cnt;//�ж��յ��������,�ӵ����²��ŵ�ʯͷ
  if(cnt>m)return false;//�ƶ�ʯͷ����,������Ҫ��
  return true;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>l>>n>>m;
  for(int i=1;i<=n;++i)cin>>d[i];
  int ml=1,mr=l;//����1,���l
  while(ml<=mr){//�ܿ�һ������
    int mid=(ml+mr)>>1;//ö���е�
    if(check(mid)==false)mr=mid-1;//false˵��mid�����������,��Ҫ��С
    else ml=mid+1;
  }
  cout<<ml-1<<'\n';
  return 0;
}
