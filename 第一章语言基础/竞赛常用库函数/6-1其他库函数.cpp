#include<bits/stdc++.h>
using namespace std;

int main(){
	//memset()���ô������ݵ�ֵ(ʱ�临�Ӷ�O(n)),��8������,��������Ϊ0,127,-127
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<"\n";
	memset(arr,-127,sizeof(arr));
	for(int i=0;i<10;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<"\n";
	//swap()������������ֵ 
	int a=10,b=20;
	cout<<"a="<<a<<"b="<<b<<'\n';
	swap(a,b);//�Զ�����ƥ�䣬ֻҪa��b����������һ�¾���
	cout<<"a="<<a<<"b="<<b<<'\n'; 
	//reverse()��ת,�ַ����������鶼�� 
	vector<int> vt={1,2,3,4,5,6};
	for(auto x:vt){
		cout<<x<<" ";
	}
	cout<<'\n';
	reverse(vt.begin(),vt.end());
	for(auto x:vt){
		cout<<x<<" ";
	}
	cout<<'\n';
	//unique()ȥ������Ԫ�ص��ظ����� ���ؿ�ʼ�ظ����ݵ�ָ�� (�����ǽ���ͬ�Ľ���������滻,���Ի���Ҫ����) 
	string str="aabbcc";
	cout<<str<<'\n'; 
	auto it=unique(str.begin(),str.end());
	cout<<str<<'\n'; 
	cout<<it-str.begin()<<'\n';
	str.erase(it,str.end());
	cout<<str<<'\n';
	return 0;
} 
