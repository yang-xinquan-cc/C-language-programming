//���ȶ���priority_queue / ˼ά
//С�����ǹ�
//https://www.lanqiao.cn/problems/1624/learning/?page=1&first_category_id=1&problem_id=1624
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;//n 1e6
  priority_queue<int,vector<int>,less<int>>pq;
  int t;
  for(int i=0;i<n;++i){
    cin>>t;
    pq.push(t);
  }
  int a,b;
  /*
  ÿ��ȡ������������,Ȼ�󽻻��ųԵ�(���ÿ��ȡ��С������,̫�鷳��,����Ƶ������С)
  �����ͬ�Ͳ���push��ȥ
  ��ͬ��push��ȥ
  ���Ҫôʣ1����,Ҫô0��
  �ٸ������һ�����
  �����1,�����뿪ʼ�Եĵ�һ���ǻ�һ��,�����������γ�ͬ������
  */
  while(pq.size()>1){
    a=pq.top();
    pq.pop();
    b=pq.top();
    pq.pop();
    if(a>b){
      pq.push(a-b);
    }
  }
  if(pq.empty()||pq.top()==1){
    cout<<"Yes\n";
  }else{
    cout<<"No\n";
  }
  return 0;
}
