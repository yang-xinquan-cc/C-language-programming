//˫ָ��
//��ѡ�Ӵ�
//https://www.lanqiao.cn/problems/1621/learning/?page=1&first_category_id=1&problem_id=1621
#include <bits/stdc++.h>
using namespace std;
using ll=long long;//��longlong�±��˶���

int const N=2e3+5;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m,k;
  cin>>n>>m>>k;
  int t;
  for(int i=1;i<=n;++i){
    a[i]=a[i-1];//ǰ׺��
    cin>>t;
    if(t>=m){//ֻ��¼��Ч����
      ++a[i];
    }
  }
  int l=1,r=1;
  ll ans=0;
  while(l<=r&&r<=n){//˫ָ��,ʱ�临�Ӷ�2n
    while(r<=n&&a[r]-a[l-1]<k){
      ++r;//˵����ΧС��
    }
    if(a[r]-a[l-1]>=k){
      ans+=(n-r+1);
      //����������l��r��k�������ڵ���m
      //��r-n��n-r+1���Ӵ�����(�׳ƹ���)
    }else{
      break;
    }
    ++l;
  }
  cout<<ans<<'\n';
  return 0;
}
