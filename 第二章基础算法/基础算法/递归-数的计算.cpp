//�ݹ�
//���ļ���
//https://www.lanqiao.cn/problems/760/learning/?page=1&first_category_id=1&problem_id=760
#include <bits/stdc++.h>
using namespace std;

int sum=0;

void getnum(int x){
  ++sum;//++sumҪд������,���������6���6����� 6-63-631-62-621-61,ÿ�θս���ݹ�ʱ��һ��
  for(int i=x/2;i>=1;--i){//�ݹ���Ҫ���ǽ�ֹ(�˳��ݹ�)����,������i>=1,����Ѿ�����1��,��x/2����0,ѭ����ֹ
    getnum(i);
  }
}
/*
�ݹ�����Ҫ����
1 ��ֹ����
2 ͨ���ݹ���ʲôֵ
*/
int main()
{
  int n;
  cin>>n;
  getnum(n);
  cout<<sum<<'\n';
  return 0;
}
