//ǰ׺��
//С֣������ƽ�⴮
//https://www.lanqiao.cn/problems/3419/learning/?page=1&first_category_id=1&problem_id=3419
#include <bits/stdc++.h>
using namespace std;

//���һ��������Ϊ�����ַ���"��"�ƽ�⴮�ĳ���
//��Ŀ�������Ӵ�,�Ӵ���ƽ�⴮�������
/*��������,����L +1,R -1
//��� a[i]��a[j]��ֵ���,˵��i��j���ַ�����ƽ�⴮
int const N=1050;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;
  cin>>s;
  int len=s.length()+1;
  s="$"+s;
  a[0]=1000;//���Բ�����ʼֵ,����
  for(int i=1;i<len;++i){
    if(s[i]=='L'){
      a[i]=a[i-1]+1;
    }else{
      a[i]=a[i-1]-1;
    }
  }
  int mx=0;
  for(int i=0;i<len;++i){
    for(int j=i+1;j<len;++j){
      if(a[j]==a[i]){
        mx=max(mx,j-i);
      }
    }
  }
  cout<<mx<<'\n';
  return 0;
}*/

int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;
  cin>>s;
  int len=s.length();
  map<int,int>mp;//�� �ַ������ֻ���ֵ λ��
  mp[len]=1000;//������ʼֵ
  //�����ַ�����0��ʼ,mp[-1]=1000�Ļ�,forѭ�����Դ�ǰ����
  //mp[len]=1000�Ļ�,forѭ�����ԴӺ���ǰ
  //mp�Ķ��岻��
  int now=1000;
  int mx=0;
  for(int i=len-1;i>=0;--i){
    if(s[i]=='L')++now;
    else --now;
    if(!mp[now]){//����ô������ֻ���ֵ������û��pos,�ʹ�pos
      mp[now]=i;
    }else{//�����ֵ�ǵڶ������ϳ���,��ô����֮ǰ���ַ������ֻ���λ�õ����ڵ�λ��
    //���for��ǰ����Ļ�,��Ҫi-mp[now];
      mx=max(mx,mp[now]-i);
    }
  }
  cout<<mx<<'\n';
  return 0;
}
