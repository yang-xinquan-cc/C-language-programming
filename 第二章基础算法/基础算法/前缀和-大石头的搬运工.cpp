//ǰ׺��
//��ʯͷ�İ��˹�
//https://www.lanqiao.cn/problems/3829/learning/?page=1&first_category_id=1&problem_id=3829
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//������Ƚ��еȵ�����
//ǰ׺�͵��ص���Ǹõ�֮ǰ������������ͳ�Ƶ�,�õ�֮�������������ͳ�Ƶ�
/*��������ö��ÿ����,Ȼ��������Ե㵽�õ�Ļ���
int main()
{
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  map<int,ll>mp;//pos value
  ll w;
  int p;
  for(int i=1;i<=n;++i){
    cin>>w>>p;
    mp[p]+=w;
  }
  ll mi=0x3f3f3f3f3f3f3f3fLL;
  for(auto &pos:mp){
    ll sum=0;
    for(auto &q:mp){
      sum+=abs(pos.first-q.first)*q.second;
    }
    mi=min(sum,mi);
  }
  cout<<mi<<'\n';
  return 0;
}*/
//����1e5�ķ�Χ��취�Ż�,ǰ׺��
//��������ö�ٵĵ�,��ǰ��ȫ����ʯͷ�ƹ���,������ȫ��ʯͷ�ƹ���
//ǰ׺�Ϳ����Ż�ǰ��һ�ѣ�����һ�ѵ����
//������,�����ö��ÿ��pos
typedef struct node{
  int pos;
  ll weight;
}node;

int const N=1e5+5;
node nd[N];
ll prvweight[N];
ll nexweight[N];
ll prvcost[N];
ll nexcost[N];

bool cmp(const node &a,const node &b){
  return a.pos<b.pos;
}
int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;++i){
    cin>>nd[i].weight>>nd[i].pos;
  }
  sort(nd+1,nd+1+n,cmp);
  //��ǰ�����ǰ׺�� ����,����
  for(int i=1;i<=n;++i){
    prvweight[i]=prvweight[i-1]+nd[i].weight;
    prvcost[i]=prvcost[i-1]+prvweight[i-1]*(nd[i].pos-nd[i-1].pos);
  }
  //�Ӻ���ǰ��ǰ׺�� ����,����
  for(int i=n;i>0;--i){
    nexweight[i]=nexweight[i+1]+nd[i].weight;
    nexcost[i]=nexcost[i+1]+nexweight[i+1]*(nd[i+1].pos-nd[i].pos);
  }
  ll mi=0x3f3f3f3f3f3f3f3fLL;
  for(int i=1;i<=n;++i){
    mi=min(mi,prvcost[i]+nexcost[i]);
  }
  cout<<mi<<'\n';
  return 0;
}

