//ģ�� ˼ά ��̬�滮
//�޾���ʯͷ
//https://www.lanqiao.cn/problems/3766/learning/?page=1&first_category_id=1&problem_id=3766
#include <bits/stdc++.h>
using namespace std;

int const N=1e6+5;
int pan[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  pan[1]=1;//�����ǵ�0����,��Ϊ�˷���pan[i],Ҳ����û�е�,��Ϊi+=nex-1��
  int t,nex=0;//t���ݴ�i,nex�жϴ�i����һ��������?
  for(int i=1;i<N;++i){//���ݷ�Χ��1e6
    if(pan[i]){//�Ƚ�ƫ��̬�滮,1��ǰ�ڵ������֮��Ľڵ�,2��ǰ�ڵ���֮ǰ�ڵ��ƹ�����
      t=i;nex=0;
      while(t){
        nex+=t%10;
        t/=10;
      }
      pan[i+nex]=pan[i]+1;
      i+=nex-1;//pan[i],����û�е�,��Ϊi+=nex-1��
    }
  }
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    if(pan[n]){
      cout<<pan[n]-1<<'\n';
    }else{
      cout<<"-1\n";
    }
  }
  return 0;
}
