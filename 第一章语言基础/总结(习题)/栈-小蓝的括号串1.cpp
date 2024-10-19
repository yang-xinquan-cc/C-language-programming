//Õ»
//Ð¡À¶µÄÀ¨ºÅ´®1
//https://www.lanqiao.cn/problems/2490/learning/?page=1&first_category_id=1&problem_id=2490
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  stack<char> st;
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(auto c:s){
    if(c=='(')st.push('(');
    else if(st.empty()){
      cout<<"No\n";
      return 0;
    }else{
      st.pop();
    }
  }
  if(st.empty())cout<<"Yes\n";
  else cout<<"No\n";
  return 0;
}
