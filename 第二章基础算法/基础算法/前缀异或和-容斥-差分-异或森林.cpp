//前缀异或和 差分 容斥
//异或森林
//https://www.lanqiao.cn/problems/3400/learning/?page=1&first_category_id=1&problem_id=3400
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;//大于16383就行 
int a[N];
int cnt[N];
//异或的性质可以前缀异或和
void solveA(){//暴力+思维,思维的点在一个数的因数是偶数个,那么他一定不是平方数(a*a!=num)
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
  //枚举每个数,如果存在非完全平方数,那么这个数出现的次数就是满足条件的
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>a[i];
    a[i]^=a[i-1];
  }
  int ans=n*(n+1)/2;//现在反过来,用总可能数减去不满足条件的
  cnt[0]=1;//0也是一个不满足条件的个数为1
  for(int i=1;i<=n;++i){
    for(int j=0;j<=200;++j){//枚举平方数,1e4本来需要100就行,但异或前缀和的ai最大可以到2倍,2e4
      int sq=j*j;
      ans-=cnt[sq^a[i]];//-之前结果为b[i]=sq^a[i]的次数
    }
    ++cnt[a[i]];//添进去
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
