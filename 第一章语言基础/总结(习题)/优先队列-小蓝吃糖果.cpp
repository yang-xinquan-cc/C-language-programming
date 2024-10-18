//优先队列priority_queue / 思维
//小蓝吃糖果
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
  每次取出最大的两个数,然后交换着吃掉(如果每次取最小的两组,太麻烦了,容易频繁留最小)
  如果相同就不用push回去
  不同就push回去
  最后要么剩1组糖,要么0组
  再根据最后一组的糖
  如果是1,可以与开始吃的第一个糖换一下,不算连续两次吃同样的糖
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
