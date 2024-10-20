//map ģ�� ˼ά
//DNA��������
//https://www.lanqiao.cn/problems/3904/learning/?page=1&first_category_id=1&problem_id=3904
#include <bits/stdc++.h>
using namespace std;

char getchar(char c){
  if(c=='A')return 'T';
  if(c=='T')return 'A';
  if(c=='C')return 'G';
  if(c=='G')return 'C';
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  map<pair<char,char>,int>mp;//������
  for(int i=0;i<n;++i){
    if(a[i]!=getchar(b[i]))//��ͬ�ٴ�
      ++mp[{a[i],b[i]}];
  }
  int sum=0,mi;
  char c,d;
  for(auto &p:mp){//����������&(����),�������õ��൱�� int a:vt ���ĵ����β�
    c=getchar(p.first.second);
    d=getchar(p.first.first);
    mi=min(mp[{c,d}],p.second);
    sum+=mi;
    mp[{c,d}]-=mi;//�ܻ��ཻ��Ȼ����ٲ�������,�������������ַ��Ĳ������һ�ν����Ĳ���
    p.second-=mi;
  }
  for(auto &p:mp){
    sum+=p.second;
  }
  cout<<sum;
  return 0;
}
