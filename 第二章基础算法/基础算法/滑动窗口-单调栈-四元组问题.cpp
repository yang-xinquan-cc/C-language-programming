//�������� ����ջ
//��Ԫ������
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
  //��������,��d
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
    while(!st.empty()&&st.top()<arr[i]){//ջ���b,����,�������k=a,ȷ��������ö�ٵ�c�����
      k=max(k,st.top());//k=a
      st.pop();
    }
    st.push(arr[i]);//b
  }
  cout<<"NO\n";
  return 0;
}
