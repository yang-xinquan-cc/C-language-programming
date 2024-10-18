//优先队列priority_queue / multiset / map
//合并果子
//https://www.lanqiao.cn/problems/741/learning/?page=1&first_category_id=1&problem_id=741
#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(const int &a,const int &b)const{
        return a<b;
    }
};

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  multiset<int,cmp>st;
  int n;
  cin>>n;
  int t;
  for(int i=0;i<n;++i){
    cin>>t;
    st.insert(t);
  }
  int a,b;
  int sum=0;
  while(st.size()>1){
    a=*st.begin();
    st.erase(st.begin());
    b=*st.begin();
    st.erase(st.begin());
    sum+=a+b;
    st.insert(a+b);
  }
  cout<<sum<<'\n';
  return 0;
}
