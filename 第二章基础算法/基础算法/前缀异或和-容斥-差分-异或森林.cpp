//ǰ׺���� ��� �ݳ�
//���ɭ��
//https://www.lanqiao.cn/problems/3400/learning/?page=1&first_category_id=1&problem_id=3400
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;//����16383���� 
int a[N];
int cnt[N];
//�������ʿ���ǰ׺����
void solveA(){//����+˼ά,˼ά�ĵ���һ������������ż����,��ô��һ������ƽ����(a*a!=num)
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]^=a[i-1];
  }
  int ans=0;
  for(int i=1;i<=n;++i){
    for(int j=i;j<=n;++j){
      int num=a[j]^a[i-1];
      if(num==0)continue;
      int sq=(int)sqrt(num);
      if(sq*sq!=num){
        ++ans;
      }
    }
  }
  cout<<ans;
}

void sovleB(){
  //ö��ÿ����,������ڷ���ȫƽ����,��ô��������ֵĴ�����������������
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]^=a[i-1];
  }
  int ans=n*(n+1)/2;//���ڷ�����,���ܿ�������ȥ������������
  cnt[0]=1;//0Ҳ��һ�������������ĸ���Ϊ1
  for(int i=1;i<=n;++i){
    for(int j=0;j<=200;++j){//ö��ƽ����,1e4������Ҫ100����,�����ǰ׺�͵�ai�����Ե�2��,2e4
      int sq=j*j;
      ans-=cnt[sq^a[i]];//-֮ǰ���Ϊb[i]=sq^a[i]�Ĵ���
    }
    ++cnt[a[i]];//���ȥ
  }
  cout<<ans;
}

int getsum(){
	int ans=0;
	int r=1e4;
	for(int i=1;i<=r;++i){
		ans=ans|i;
	}
	return ans;
} 

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  //cout<<getsum()<<'\n';//16383
  //solveA();
  sovleB();
  return 0;
}
