//ö��
//��������
//https://www.lanqiao.cn/problems/498/learning/?page=1&first_category_id=1&problem_id=498
#include <bits/stdc++.h>
using namespace std;

//�Ȱ��·ݶ�Ӧ��������ǰд�ñ���
int months[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

//���ж������껹��ƽ��

bool pan(int year){
  if((year%4==0&&year%100!=0)||year%400==0)return true;
  return false;
}

//�и�С����,���Ĵ���ת����ԭ����ͬ
//string���Է�ת,Ȼ��==�ж�һ��
//��reverse(a.begin(),a.end())

bool panhui(string s){
  int len=s.length();
  int lenp=len/2;
  for(int i=0;i<=lenp;++i){
    if(s[i]!=s[len-i-1])return false;
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int data;
  cin>>data;
  int year=data/10000;
  int month=data/100%100;
  int day=data%100;
  bool hui1=false;
  bool hui2=false;
  string a,b;
  for(int i=year;;++i){
    if(pan[i])months[2]=29;
    else months[2]=28;
    for(int j=1;j<13;++j){
      for(int k=1;k<=months[j];++k){
        if(i==year&&j<month){
          j=month;
          k=day;
          continue;
        }
        a=to_string(i);
        if(j<10)a+="0";
        a+=to_string(j);
        if(k<10)a+="0";
        a+=to_string(k);
        b=a;
        reverse(a.begin(),a.end());
        if(a==b){//Ҳ����д��if(panhui(a))
          if(hui1==false){
            hui1=true;
            cout<<a<<'\n';
          }
          if(a[0]==a[2]&&a[1]==a[3]){
            cout<<a<<'\n';
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
