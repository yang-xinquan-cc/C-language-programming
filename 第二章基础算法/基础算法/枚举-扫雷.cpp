//ö��
//ɨ��
//https://www.lanqiao.cn/problems/549/learning/?page=1&first_category_id=1&problem_id=549
#include <bits/stdc++.h>
using namespace std;
int const N=105;

int a[N][N];

int getnum(int x,int y){
  if(a[x][y]==1)return 9;
  int sum=0;
  if(a[x-1][y-1])++sum;//��һ�� 3��
  if(a[x-1][y])++sum;
  if(a[x-1][y+1])++sum;

  if(a[x][y-1])++sum;//�м��� 2��
  if(a[x][y+1])++sum;
  
  if(a[x+1][y-1])++sum;//��һ�� 3��
  if(a[x+1][y])++sum;
  if(a[x+1][y+1])++sum;
  return sum;
}

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n,m;
  cin>>n>>m;
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      cin>>a[i][j];//����ֱ��getnum,��Ϊ��Χ8���㻹ûȷ������,�ȴ���ͳ��
    }
  }
  for(int i=1;i<=n;++i){
    for(int j=1;j<=m;++j){
      cout<<getnum(i,j)<<" ";
    }
    cout<<'\n';
  }
  return 0;
}
