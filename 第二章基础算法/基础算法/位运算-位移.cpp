//λ����
//λ��
//https://www.lanqiao.cn/problems/3261/learning/?page=1&first_category_id=1&problem_id=3261
#include<bits/stdc++.h>
using namespace std;
/*
�����������Ӵ� 
//��num�Ķ��������ӵ͵���,������0ɾȥ(��λ�õ�0),��λ��һ����1
//��ȡ�Ӵ����������ַ���(��ʽ����1...1) 
//��s1ת��Ϊs2��������s1��s2�Ƿ���֣���Ϊ��s1��δ���ֵ�s2�������Ŀ���ͨ���ƶ�ɾ��
*/
string change(int num){
  string ch;
  while(num){
    if(num&1)break;//��num�Ķ��������ӵ͵��ߣ�������0ɾȥ��
    num>>=1;
  }
  while(num){//��ȡ�Ӵ���������λ��0���ַ���
    ch+=(num&1?'1':'0');
    num>>=1;
  }
  return ch;
}
void solve(){
  int m,n;cin>>m>>n;
  string s1=change(m),s2=change(n);
  //��s1ת��Ϊs2��������s1��s2�Ƿ���֣���Ϊ��s1��δ���ֵ�s2�������Ŀ���ͨ���ƶ�ɾ��
  if(s1.find(s2)!=-1)cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n';
}
int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t;cin>>t;
  while(t--)solve();
  return 0;
}
