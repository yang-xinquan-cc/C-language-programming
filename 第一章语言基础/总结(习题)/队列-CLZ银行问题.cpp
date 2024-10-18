//队列queue
//CLZ银行问题
//https://www.lanqiao.cn/problems/1113/learning/?page=1&first_category_id=1&problem_id=1113
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  queue<string>vipq;
  queue<string>norq;
  int n;
  cin>>n;
  string a,b,c;
  for(int i=0;i<n;++i){
    cin>>a;
    if(a=="IN"){
      cin>>b>>c;
      if(c=="V"){
        vipq.push(b);
      }else{
        norq.push(b);
      }
    }else{
      cin>>c;
      if(c=="V"){
        vipq.pop();
      }else{
        norq.pop();
      }
    }
  }
  while(!vipq.empty()){
    cout<<vipq.front()<<'\n';
    vipq.pop();
  }
  while(!norq.empty()){
    cout<<norq.front()<<'\n';
    norq.pop();
  }
  return 0;
} 
