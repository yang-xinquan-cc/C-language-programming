#include<bits/stdc++.h>
using namespace std;
//1.1数据类型的使用
using ll=long long;//将long long数据类型改成ll 方便使用 
//typedef long long ll; typedef作用是一样的 名字在最后 

//2.1数组的使用 
int const N=1e6+5;//const表示常数,用大写字母表示(习惯上)
int arr[N];//由于定义在非函数体内部，所以N大小的数组内部都是默认值0,定义在函数体内部,则是随机数(分配内存的位置不同) 

int main(){
	//1.2数据类型的使用
	char a='c';//字符用''单引号
	cout<<a<<'\n'; 
	char aa[15]="hello world";//字符串(字符数组)用""双引号,数组下标都是从0开始 
	cout<<aa<<'\n'; 
	ll num=114514114514114514;//1e18的数据，需要用longlong来存
	cout<<num<<'\n';
	double flow=3.14159263;//float精度不够，用double
	cout<<flow<<'\n';//3.14159
	//cout输出有优化，想要指定格式
	cout<<fixed<<setprecision(9)<<flow<<'\n';
	
	//3.1字符数组的使用 
	char str[10]="123321";//字符串的结尾是\0 
	cout<<"sizeof(str)="<<sizeof(str)<<'\n'; 
	int index=0;//以0开始 
	while(str[index]!='\0'){
		cout<<str[index];
		++index;
	}
	cout<<'\n';
	char strr[]="123a\0a321";//可以不指定容量,容量包括最后隐藏的'\0' 
	cout<<"sizeof(strr)="<<sizeof(strr)<<'\n'; 
	cout<<strr<<'\n';//遇到'\0'截止
	
	//4交换两个变量的值(类比如两杯饮料)
	int n=10,m=20;
	cout<<"n="<<n<<"m="<<m<<'\n';
	
	//这三行代码就是交换两个变量的值，需要借用临时变量temp
	int temp=n;
	n=m;
	m=temp;
	cout<<"n="<<n<<"m="<<m<<'\n';
	 
	//5判断1-10的偶数并输出
	for(int i=1;i<=10;++i){
		if(i%2==0){
			cout<<i<<" ";
		}
	} 
	//i%2是取i/2的余数,也可以写成i&1，&是按位与，当i为偶数时，二进制最低位一定是0，所以&1为0则是偶数 
	return 0;
} 
