#include<bits/stdc++.h>
using namespace std;
using ll=long long;

//����������int���͵�,Ҳ���Դ��ṹ��֮���,pair֮��� 
bool cmp(const int &a,const int &b){
	return a>b;
}

int main(){
	//sort��������sort(��ʼ��ַ,��β��ַ,���򷽷�)
	int n=9;
	//��������n��Ȼ���������飬Ȼ����������Ϊ��չʾ���̶�9���� 
	int arr[n]={5,6,1,3,4,2,8,7,9};
	sort(arr,arr+n);
	for(int i=0;i<n;++i){
		cout<<arr[i]<<' ';
	} 
	cout<<'\n';
	//vector������(����),��vector<��������> ������
	vector<int> vt={5,6,1,3,4,2,8,7,9};
	//ʹ��ʱ��������ͨ����һ�� 
	cout<<vt[0]<<'\n'; 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	//sort��������sort(��ʼ��ַ,��β��ַ,���򷽷�)
	//�����������򷽷�,��Ĭ�ϵ����� 
	//greater<����>(),��Ϊ�Ƿ��������������ţ�
	//less<����>() 
	sort(vt.begin(),vt.end(),greater<int>()); 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	sort(vt.begin(),vt.end(),less<int>()); 
	for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	//�Զ���ȽϺ���
	//cmp������Ҫд��main����֮ǰ,��Ϊ���������Ǵ������½��е� 
	//���Ҫд��������֮������Ҫ��main֮ǰ�����˺���,main֮��д�ú�����ʵ�� 
	sort(vt.begin(),vt.end(),cmp);
	 for(auto x:vt){
		cout<<x<<' ';
	}
	cout<<'\n';
	return 0;
} 

