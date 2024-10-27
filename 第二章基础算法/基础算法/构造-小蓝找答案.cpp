//构造
//小蓝找答案
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
  //我们只需要考虑栈里位置最小(最靠前的)的进位
  //如果位置靠前产生进位,那么后面的进位又可以从a开始编码
  //insert是已经是p位置产生进位
  while(top>1&&sta[top].pos>p)--top;
  if(sta[top].pos==p)++sta[top].num;//说明位置一样p第二次出现,++num
  else sta[++top]=(node){p,1};//否则第一次该位置出现,则产生进位1
  if(top>1&&sta[top].num==mid)insert(sta[top].pos-1,mid);
  //特判,如果当前num次数达到了mid的字符集,说明必须进位
  //进位又把之后的while(top>1&&sta[top].pos>p)--top;
  //清掉了
}

bool check(int mid){
  sta[top=1]={0,0};//栈顶存0位置,0次数
  for(int i=2;i<=n;++i){
    if(a[i]<=a[i-1])insert(a[i],mid);//=也得进位
  }  
  if(sta[1].num==0)return true;
  //如果栈顶0位置的值为0
  //说明后面的进位对0位置不产生进位
  //即 用 mid期望 满足条件
  return false;
}

int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin>>n;
  int lens=0;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    if(a[i]>a[i-1])++lens;
    //如果每个长度都是递增的,那么全为a就行,1个字符
    //判断下不需要进位的个数
  }
  if(lens==n){//都不需要进位
    cout<<1;
    return 0;
  }
  int l=2,r=N;//最少2个字符集,最多N个,二分
  while(l<=r){
    int mid=(l+r)>>1;
    if(check(mid))r=mid-1;
    else l=mid+1;
  }
  cout<<l;
  return 0;
}
