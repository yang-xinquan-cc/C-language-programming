//����
//С���Ҵ�
//https://www.lanqiao.cn/problems/5424/learning/?page=1&first_category_id=1&problem_id=5424
#include<bits/stdc++.h>
using namespace std;

int const N=2e5+10;
int a[N];
int n;

struct node{
  int pos;
  int num;
}sta[N];
int top;

void insert(int p,int mid){
  //����ֻ��Ҫ����ջ��λ����С(�ǰ��)�Ľ�λ
  //���λ�ÿ�ǰ������λ,��ô����Ľ�λ�ֿ��Դ�a��ʼ����
  //insert���Ѿ���pλ�ò�����λ
  while(top>1&&sta[top].pos>p)--top;
  if(sta[top].pos==p)++sta[top].num;//˵��λ��һ��p�ڶ��γ���,++num
  else sta[++top]=(node){p,1};//�����һ�θ�λ�ó���,�������λ1
  if(top>1&&sta[top].num==mid)insert(sta[top].pos-1,mid);
  //����,�����ǰnum�����ﵽ��mid���ַ���,˵�������λ
  //��λ�ְ�֮���while(top>1&&sta[top].pos>p)--top;
  //�����
}

bool check(int mid){
  sta[top=1]={0,0};//ջ����0λ��,0����
  for(int i=2;i<=n;++i){
    if(a[i]<=a[i-1])insert(a[i],mid);//=Ҳ�ý�λ
  }  
  if(sta[1].num==0)return true;
  //���ջ��0λ�õ�ֵΪ0
  //˵������Ľ�λ��0λ�ò�������λ
  //�� �� mid���� ��������
  return false;
}

int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int lens=0;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    if(a[i]>a[i-1])++lens;
    //���ÿ�����ȶ��ǵ�����,��ôȫΪa����,1���ַ�
    //�ж��²���Ҫ��λ�ĸ���
  }
  if(lens==n){//������Ҫ��λ
    cout<<1;
    return 0;
  }
  int l=2,r=N;//����2���ַ���,���N��,����
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid))r=mid-1;
    else l=mid+1;
  }
  cout<<l;
  return 0;
}
