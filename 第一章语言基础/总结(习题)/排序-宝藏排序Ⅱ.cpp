//����
//���������
//https://www.lanqiao.cn/problems/3226/learning/?page=1&first_category_id=1&problem_id=3226
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+50;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){//��������Ĳ���,�����1��ʼ��n,������Щ���ڵĿ�,��0�±�Ĵ��� 
    cin>>a[i];
  }
  sort(a+1,a+1+n);
  for(int i=1;i<=n;++i){
    cout<<a[i]<<" ";
  }
  cout<<'\n';
  return 0;
}
