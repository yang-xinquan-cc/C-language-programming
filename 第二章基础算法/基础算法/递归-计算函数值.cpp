//�ݹ�
//���㺯��ֵ
//������ĿҪ�����
#include <bits/stdc++.h>
using namespace std;

int getnum(int x){
  if(x==0)return 1;
  if(x%2==0)return getnum(x/2);
  else return 1+getnum(x/2);
}
/*
���غ��� S(x) �Ķ������£�
�� xΪ 0ʱ��S(0)=1
�� x Ϊż��ʱ��S(x)=S(x/2)
�� xΪ����ʱ��S(x)=S(x?1)+1
����Ҫ��дһ�����򣬼������������ 
x���غ���S(x) ��ֵ��

�����ʽ
�������һ�������� x(1��x��1e6)
�����ʽ
���һ����������ʾ���غ���S(x) ��ֵ
*/
int main()
{
  int x;
  cin>>x;
  cout<<getnum(x)<<'\n';
  return 0;
}
