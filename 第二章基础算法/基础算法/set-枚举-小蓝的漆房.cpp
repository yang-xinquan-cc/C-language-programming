//set ö��
//С�����᷿
//https://www.lanqiao.cn/problems/3272/learning/?page=1&first_category_id=1&name=%E5%B0%8F%E8%93%9D%E7%9A%84%E6%BC%86%E6%88%BF
#include <bits/stdc++.h>
using namespace std;

int const N=1e4+50;
int a[N];//�淿����ɫ

int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int t,n,k;
  set<int>st;//����ɫ,��Ҫȥ��
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=1;i<=n;++i){
      cin>>a[i];//�淿����ɫ
      if(st.find(a[i])==st.end()){
        st.insert(a[i]);//����ɫ����
      }
    }
    int minn=n;//������Ҫn��
    for(auto x:st){
      int sum=0;
      for(int i=1;i<=n;++i){
        if(a[i]!=x){//������˵����ҪͿ����
          ++sum;
          i+=k-1;//������k-1,��Ϊ��Χ��forѭ��++i
        }
      }
      minn=min(sum,minn);//ȡ����С����
    }
    st.clear();
    cout<<minn<<'\n';
  }
  //���ⲻ��ֱ�ӱ���ͳ���Ǹ���ɫ�ķ������,��ΪͿ���ϳ���Ϊk,��������Ϳ��
  return 0;
}
