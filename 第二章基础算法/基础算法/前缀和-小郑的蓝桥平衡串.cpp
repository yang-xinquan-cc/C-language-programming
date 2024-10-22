//前缀和
//小郑的蓝桥平衡串
//https://www.lanqiao.cn/problems/3419/learning/?page=1&first_category_id=1&problem_id=3419
#include <bits/stdc++.h>
using namespace std;

//输出一个整数，为输入字符串"中"最长平衡串的长度
//题目就是找子串,子串是平衡串的最长长度
/*常规做法,遇见L +1,R -1
//如果 a[i]和a[j]的值相等,说明i到j的字符串是平衡串
int const N=1050;
int a[N];

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  string s;
  cin>>s;
  int len=s.length()+1;
  s="$"+s;
  a[0]=1000;//可以不给初始值,都行
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
  map<int,int>mp;//存 字符串数字化的值 位置
  mp[len]=1000;//给个初始值
  //由于字符串从0开始,mp[-1]=1000的话,for循环可以从前往后
  //mp[len]=1000的话,for循环可以从后往前
  //mp的定义不变
  int now=1000;
  int mx=0;
  for(int i=len-1;i>=0;--i){
    if(s[i]=='L')++now;
    else --now;
    if(!mp[now]){//如果该串的数字化的值不存在没有pos,就存pos
      mp[now]=i;
    }else{//如果该值是第二次以上出现,那么计算之前该字符串数字化的位置到现在的位置
    //如果for从前往后的话,需要i-mp[now];
      mx=max(mx,mp[now]-i);
    }
  }
  cout<<mx<<'\n';
  return 0;
}
