//����ת��
//�Ž���תʮ����
//https://www.lanqiao.cn/problems/2095/learning/?page=1&first_category_id=1&problem_id=2095
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  string s="2022";
  ll base=1;
  ll sum=0;
  int len=s.length();
  reverse(s.begin(),s.end());//Ҳ���Բ�reverse��,��ͷ��ʼ,ÿ������for�ͷsum*=16,Ҳ����
  //�����й��ַ���ƥ���Ҳ���õ�����ԭ��
  for(int i=0;i<len;++i){
    sum+=(ll)(s[i]-'0')*base;
    base*=9;
  }
  cout<<sum<<'\n';
  return 0;
}
