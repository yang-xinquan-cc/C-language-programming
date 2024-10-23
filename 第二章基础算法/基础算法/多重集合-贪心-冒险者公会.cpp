//���ؼ��� ̰��
//ð���߹���
//https://www.lanqiao.cn/problems/3611/learning/?page=1&first_category_id=1&problem_id=3611
#include <bits/stdc++.h>
using namespace std;

int const N=1e3+5;

//�����ѵ�����ÿ������ֻ��ʹ��һ��
//������Ҫ�����������ô��ڵ���ί���Ѷ�
//���ܹ��������
multiset<int> st;
int a[N][N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int m,n;
  cin>>m>>n;
  int t;
  for(int i=1;i<=m;++i){
    cin>>t;
    st.insert(t);
  }
  int mx=0;
  for(int i=1;i<=n;++i){
    cin>>a[i][0];//a[i][0]��ί������
    mx=max(mx,a[i][0]);
    for(int j=1;j<=a[i][0];++j){
      cin>>a[i][j];
    }
    sort(a[i]+1,a[i]+1+a[i][0],greater<int>());
  }
  int sum=0;
  for(int i=1;i<=mx;++i){
    //��ÿ����������Ѷȵ�ί��������ȥ���
    t=0;
    for(int j=1;j<=n;++j){
      t=max(t,a[j][i]);
    }
    //t������Ѷȵ�ί��
    auto x=lower_bound(st.begin(),st.end(),t);
    if(x==st.end()){
      cout<<-1<<'\n';
      return 0;
    }
    sum+=*x;
    st.erase(x);
  }
  cout<<sum<<'\n';
  return 0;
}
