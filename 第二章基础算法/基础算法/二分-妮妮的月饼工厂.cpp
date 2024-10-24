//����
//���ݵ��±�����
//https://www.lanqiao.cn/problems/3990/learning/?page=1&first_category_id=1&problem_id=3990
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;
int a[N];

int n,k;

bool check(int mid){
  int sum=0;
  for(int i=1;i<=n;++i){
    sum+=a[i]/mid;
  }
  if(sum>=k)return true;
  return false;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>k;
  for(int i=1;i<=n;++i)cin>>a[i];
  int l=1,r=1e9+7;
  while(l<=r){//����check����/mid,��0�����,l��ֵ���Ϊ1,�������
    int mid=(l+r)>>1;
    if(check(mid))l=mid+1;
    else r=mid-1;
  }
  if(r==0)cout<<-1;
  else cout<<r;
  return 0;
}
