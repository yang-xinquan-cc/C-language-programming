#include<iostream>
using namespace std;

int main(){
	//1提高cin和cout的速度
	//关io流 
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	//关了后不能使用endl
	//不能cin和scanf混用，不能cout和printf混用
	//由于提示输入在缓存，关流后不会提示
	//故做完题后再加关流，题有错可以不管流在合适的地方输出数据检错 
	int x,y; 
	cin>>x>>y;
	cout<<x<<" "<<y;
	return 0;
} 
