//����
//�ɴճɵ��������
//https://www.lanqiao.cn/problems/3344/learning/?page=1&first_category_id=1&problem_id=3344
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+5;
ll a[N];
ll n,k;

bool check(ll mid){//�ܴ��mid��
  ll sum=0;
  for(int i=1;i<=n;++i){
    sum+=min(a[i],mid);//ÿ�ֻ�����ṩmid,�����ṩa[i]
    //�൱��a[i]���ֻ�����ÿһ������(mid)
  }
  //ÿһ������(mid)���ϵ�������,�������������Ҫ��mid*k˵����������
  if(sum>=mid*k)return true;//���������Ļ���һ��һ������ȥ��
  return false;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n>>k;
  ll sum=0;
  //���ٴ��0��,����ȫ�������
  for(int i=1;i<=n;++i){
    cin>>a[i];
    sum+=a[i];  
  }
  ll l=0,r=sum/k;
  while(l<=r){//��������(��)
    ll mid=(l+r)>>1;
    if(check(mid))l=mid+1;
    else r=mid-1;
  }
  cout<<r;
  return 0;
}
