//优先队列priority_queue / set
//合并果子
//https://www.lanqiao.cn/problems/741/learning/?page=1&first_category_id=1&problem_id=741
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  priority_queue<int,vector<int>,greater<int>> pq;//int就够了
  int n;
  cin>>n;
  int t;
  for(int i=0;i<n;++i){
    cin>>t;
    pq.push(t);
  }
  int a,b;
  int sum=0;
  while(pq.size()>1){
    a=pq.top();
    pq.pop();
    b=pq.top();
    pq.pop();
    sum+=a+b;
    pq.push(a+b);
  }
  cout<<sum<<'\n';
  return 0;
} 
