//����
//Ф���ĳ˷���
//https://www.lanqiao.cn/problems/3404/learning/?page=1&first_category_id=1&problem_id=3404
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll n,m,k;


bool check(ll mid){
  ll sum=0;
  for(int i=1;i<=n;++i){
    sum+=min(mid/i,m);//С�ڵ���,��Ҫmin,ÿ�����m��
  }
  if(sum>=k)return true;//��mid�����ڱ���С�ڵ��ڵ�������k,˵��mid�Ǵ��ڵ���������
  return false;
}

int main()
{
  cin>>n>>m>>k;
  ll l=1,r=k;
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid))r=mid-1;//mid�Ǵ��ڵ���,�ǵ�k���
    else l=mid+1;
  }
  cout<<l;
  return 0;
}
