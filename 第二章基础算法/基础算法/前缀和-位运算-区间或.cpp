//ǰ׺�� λ����
//�����
//https://www.lanqiao.cn/problems/3691/learning/?page=1&first_category_id=1&problem_id=3691
#include <bits/stdc++.h>
using namespace std;
int const N=1e5+10;

int dp[N][21];//�� i λ��(ai) �����Ƶ�j λ�Ĵ���

void getdata(int pos,int num){//��num��ɶ�����
  int index=0;
  while(num){
    if(num&1)++dp[pos][index];
    num>>=1;
    ++index;
  }
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,q;
  cin>>n>>q;
  int t;
  for(int i=1;i<=n;++i){
    cin>>t;
    getdata(i,t);
  }
  //Ԥ����
  for(int i=1;i<=n;++i){
    for(int j=0;j<21;++j){
      dp[i][j]+=dp[i-1][j];//�������jλ�õĴ�����ǰ׺��
    }
  }
  int l,r;
  while(q--){
    cin>>l>>r;
    int num=0;
    for(int j=0;j<21;++j){
      if(dp[r][j]>dp[l-1][j]){//ǰ׺������Ҳ����,����λ���Ƿ�+1
        num+=(1<<j);
      }
    }
    cout<<num<<'\n';
  }
  return 0;
}
