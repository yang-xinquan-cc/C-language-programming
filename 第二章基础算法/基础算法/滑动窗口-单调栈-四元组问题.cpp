//滑动窗口 单调栈
//四元组问题
//https://www.lanqiao.cn/problems/3416/learning/?page=1&first_category_id=1&problem_id=3416
#include <bits/stdc++.h>
using namespace std;

int const N=5e5+50;
int arr[N];
int miarr[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)cin>>arr[i];
  miarr[n+1]=0x3f3f3f3f;
  //滑动窗口,算d
  for(int i=n;i>0;--i)miarr[i]=min(miarr[i+1],arr[i]);
  int k=INT_MIN;//a
  stack<int>st;
  for(int i=1;i<=n;++i){//ai=c
    if(arr[i]<k){//c<a
      if(arr[i]>miarr[i]){//c>d
        cout<<"YES\n";
        return 0;
      }
    }
    while(!st.empty()&&st.top()<arr[i]){//栈里存b,最大的,次最大是k=a,确保次最大比枚举的c大就行
      k=max(k,st.top());//k=a
      st.pop();
    }
    st.push(arr[i]);//b
  }
  cout<<"NO\n";
  return 0;
}
