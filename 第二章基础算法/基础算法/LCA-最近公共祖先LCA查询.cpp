//LCA
//最近公共祖先LCA查询
//https://www.lanqiao.cn/problems/4385/learning/?page=1&first_category_id=1&tag_relation=intersection&problem_id=4385
#include <bits/stdc++.h>
using namespace std;

int const N=1e5+5;

vector<int> mp[N];
int deep[N];
int dis[N][20];

void bfs(int x,int fa){
  deep[x]=deep[fa]+1;
  dis[x][0]=fa;
  for(int i=1;i<20;++i){
    dis[x][i]=dis[dis[x][i-1]][i-1];
  }
  for(int pos:mp[x]){
    if(pos==fa)continue;
    bfs(pos,x);
  }
}

int lca(int x,int y){
  if(deep[x]>deep[y])swap(x,y);
  for(int i=19;i>=0;--i){
    if(deep[dis[y][i]]>=deep[x]){
      y=dis[y][i];
    }
  }
  if(x==y)return x;
  for(int i=19;i>=0;--i){
    if(dis[x][i]!=dis[y][i]){
      x=dis[x][i];
      y=dis[y][i];
    }
  }
  return dis[x][0];
}

int main()
{
  int n;
  cin>>n;
  int u,v;
  for(int i=1;i<n;++i){
    cin>>u>>v;
    mp[u].push_back(v);
    mp[v].push_back(u);
  }
  deep[1]=1;
  bfs(1,0);//深度
  int q;
  cin>>q;
  int a,b;
  while(q--){
    cin>>a>>b;
    cout<<lca(a,b)<<'\n';
  }
  return 0;
}
