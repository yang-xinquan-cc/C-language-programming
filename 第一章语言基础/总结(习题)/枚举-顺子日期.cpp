//枚举
//顺子日期
//https://www.lanqiao.cn/problems/2096/learning/?page=1&first_category_id=1&name=%E9%A1%BA%E5%AD%90%E6%97%A5%E6%9C%9F
#include <bits/stdc++.h>
using namespace std;

int months[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
  int sum=0;
  int a,b,c,d;
  for(int i=1;i<=12;++i){
    a=i/10;
    b=i%10;
    for(int j=1;j<=months[i];++j){
      c=j/10;
      d=j%10;
      if(b+1==c){//连续日期,最起码中间两个数是连续的 
        if(a+1==b||c+1==d){//要么前面两个数是连续的,要么后面两个数是连续的 
          ++sum;
        }
      }
    }
  }
  cout<<sum<<'\n';
  return 0;
}
