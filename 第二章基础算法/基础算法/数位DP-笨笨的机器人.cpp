//��λDP
//�����Ļ�����
//https://www.lanqiao.cn/problems/3262/learning/?page=1&first_category_id=1&problem_id=3262
#include <bits/stdc++.h>
using namespace std;
//����Ҫôdfs,Ҫôdp
//����ƫλ����� ��λdp
int const N=16;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
  }
  int sum=(1<<n)-1;//2��n�η���1����nλ
  //-1��0000��1111,0��ʾ��λ����Ҫ+,1��ʾ��λ����Ҫ��
  //���Ǳ���ö��ÿ�����
  int cnt=0,num=0;
  for(int i=0;i<=sum;++i){
    num=0;
    for(int j=1;j<=n;++j){
      if((i>>(j-1))&1)num-=a[j];//Ҳ����if((i>>(j-1))&1)
      else num+=a[j];
    }//ÿ�μ������(+7-a[j])%7,Ҳ�������һ��num%7
    if(num%7==0)++cnt;
  }
  double ans=cnt*1.0/(1<<n);
  ans=round(ans*10000)/10000;
  cout<<fixed<<setprecision(4)<<ans;
  return 0;
}
