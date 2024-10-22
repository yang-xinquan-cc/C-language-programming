//莫队
//小B的询问
//https://www.luogu.com.cn/problem/P2709 
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int const N=5e4+50;

struct Q{
	int l,r,k;
}q[N];

int a[N];
int pos[N];
int cnt[N];
ll ans[N];

ll res;

void add(int n){
	++cnt[a[n]];
	res+=(cnt[a[n]]*cnt[a[n]])-(cnt[a[n]]-1)*(cnt[a[n]]-1);
}
void sub(int n){
	--cnt[a[n]];
	res-=(cnt[a[n]]+1)*(cnt[a[n]]+1)-(cnt[a[n]]*cnt[a[n]]);
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	int siz=sqrt(n);
	for(int i=1;i<=n;++i){
		cin>>a[i];
		pos[i]=i/siz;
	}
	for(int i=0;i<m;++i){
		cin>>q[i].l>>q[i].r;
		q[i].k=i;
	}
	sort(q,q+m,[](Q x,Q y){
		return pos[x.l]==pos[y.l]?x.r<y.r:pos[x.l]<pos[y.l];
	});
	int l=1,r=0;//左闭右闭 
	for(int i=0;i<m;++i){
		while(q[i].l<l)add(--l);
		while(q[i].l>l)sub(l++);
		while(q[i].r<r)sub(r--);
		while(q[i].r>r)add(++r);
		ans[q[i].k]=res;
	}
	for(int i=0;i<m;++i){
		cout<<ans[i]<<'\n';
	}
	return 0;
} 
