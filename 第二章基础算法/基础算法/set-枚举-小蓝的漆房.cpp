//set 枚举
//小蓝的漆房
//https://www.lanqiao.cn/problems/3272/learning/?page=1&first_category_id=1&name=%E5%B0%8F%E8%93%9D%E7%9A%84%E6%BC%86%E6%88%BF
#include <bits/stdc++.h>
using namespace std;

int const N=1e4+50;
int a[N];//存房间颜色

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t,n,k;
  set<int>st;//存颜色,需要去重
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=1;i<=n;++i){
      cin>>a[i];//存房子颜色
      if(st.find(a[i])==st.end()){
        st.insert(a[i]);//存颜色类型
      }
    }
    int minn=n;//最少需要n天
    for(auto x:st){
      int sum=0;
      for(int i=1;i<=n;++i){
        if(a[i]!=x){//不等于说明需要涂颜料
          ++sum;
          i+=k-1;//这里是k-1,因为外围的for循环++i
        }
      }
      minn=min(sum,minn);//取个最小就行
    }
    st.clear();
    cout<<minn<<'\n';
  }
  //这题不能直接暴力统计那个颜色的房间最多,因为涂颜料长度为k,可以连续涂的
  return 0;
}
