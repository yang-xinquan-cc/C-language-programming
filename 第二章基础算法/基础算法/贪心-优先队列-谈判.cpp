//���ȶ��� ̰��
//̸��
//https://www.lanqiao.cn/problems/545/learning/?page=1&first_category_id=1&problem_id=545
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
//�ܱ�׼��̰��,priority_queue

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  priority_queue<ll,vector<ll>,greater<ll>>pq;
  //ÿ��ȡ��С�����������кϲ�,����
  int n;
  cin>>n;
  ll t;
  for(int i=0;i<n;++i){
    cin>>t;
    pq.push(t);
  }
  ll sum=0;
  while(pq.size()>1){
    ll a=pq.top();
    pq.pop();
    ll b=pq.top();
    pq.pop();
    sum+=a+b;
    //ȡ����С��������,�ϲ���push��ȥ
    pq.push(a+b);
  }
  cout<<sum<<'\n';
  return 0;
}
