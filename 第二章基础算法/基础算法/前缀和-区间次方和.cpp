//ǰ׺��
//����η���
//https://www.lanqiao.cn/problems/3382/learning/?page=1&first_category_id=1&problem_id=3382
#include <bits/stdc++.h>
using namespace std;
using ll=long long;//��Ҫ��longlong

int const N=1e5+10;
ll const MOD=1e9+7;
ll a[6][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;++i)cin>>a[1][i];//��1�η�
  for(int i=2;i<=5;++i){
    for(int j=1;j<=n;++j){
      a[i][j]=(a[i-1][j]*a[1][j])%MOD;//����ÿ������5�η�
    }
  }
  for(int j=2;j<=n;++j){
    for(int i=1;i<=5;++i){
      a[i][j]=(a[i][j]+a[i][j-1])%MOD;//��������η��ĺ�
    }
  }
  int l,r,k;
  while(m--){
    cin>>l>>r>>k;
    cout<<(a[k][r]-a[k][l-1]+MOD)%MOD<<'\n';//��ؼ���+MOD%MOD
    //��Ϊ����η� �� �͵�ʱ��%MOD��,���ܺ��������ǰ�����С,�����Ҫ�ӻ���
  }
  return 0;
}
