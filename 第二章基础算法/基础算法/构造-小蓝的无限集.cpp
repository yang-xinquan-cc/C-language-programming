//构造
//小蓝的无限集
/*
问题描述
小蓝有一个无限集，该集合生成方式如下
1.集合里面初始元素为 1。
2.如果 在集合中，则 ?·a, 十b均在集合中。
例如a=2,b=3时，该集合五个最小元素如下!
。1.
。2，因为2-1.2。
。4，因为4-1+3.
。5，因为5=2+3.
。7，因为7=5+2.
现在有t组数据，每组数组给定你3个正整数 a,b,n，
在a,b符合以上条件的情况下，你判断n是否在集合中。
输入格式
第一行输入一个正整数 t，表示测试案例组数。
接下来t行，每行输入3个正整数 a,b,n，由若干个
空格分割，含义如题所述。
输出格式
对于每组数据，如果 几 在集合中，输出 Yes，否则输
出 No。
样例输入
1
4 7
2 5 8
3 6 8
12 11 81
样例输出
NO
Yes
NO
NO
评测数据规模
1 ≤t ≤ 103,1 ≤ a, b,n < 10°.
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t;
  cin>>t;
  ll a,b,n;
  while(t--){
    cin>>a>>b>>n;
    if((n-1)%b==0){
      cout<<"Yes\n";
      continue;
    }
    if(a==1){
      cout<<"No\n";
      continue;
    }
    for(ll i=a;i<=n;i*=a){
      if((n-i)%b==0){
        cout<<"Yes\n";
        continue;
      }
    }
    cout<<"No\n";
  }
  return 0;
}
