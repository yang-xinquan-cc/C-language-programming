//ǰ׺��
//��������
//https://www.lanqiao.cn/problems/3260/learning/?page=1&first_category_id=1&problem_id=3260
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=2e5+50;
ll a[N];
//������Ҫǰ׺��
//̰���ǲ��е�,��Ϊ��ǰɾ�����Ų�����ȫ�����,����ɾ���������ŵ��º���ɾ������ʱ��ȫ��δ������

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  int n,k;
  ll mx;
  while(t--){
    cin>>n>>k;
    for(int i=1;i<=n;++i){
      cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;++i){
      a[i]+=a[i-1];
    }
    mx=0;
    for(int i=n;i>=n-k;--i){
      mx=max(mx,a[i]-a[(k-(n-i))*2]);
    }
    /*
    for(int i=0;i<=2*k;i+=2){
      mx=max(mx,a[n-k+i/2]-a[i]);
    }
    */
    cout<<mx<<'\n';
  }
  return 0;
}
