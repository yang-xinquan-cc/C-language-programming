#include<bits/stdc++.h>
using namespace std;
//STL�ǳ����������õĿ⺯��
//�кܶ��������Ͷ�����ƺõ�
//��ƪ��Ҫ��pair

template<class T>//ģ����, �ؼ���template<typename ������> ���� template<class ������> ֻ֧�������һ������ 
//�����õ� ������ ������;ʱ,�����ʽȷ�����������Զ��ֱ����� 
struct pair2 {
	T first;
	T second;
	pair2(){
		
	}
	pair2(T x,T y){
		first=x;
		second=y;
	}
	bool operator==(const pair2 &other)const{
		if(this.first==other.first && this.second==other.second){
			return true;
		}
		return false;
	}
	//...����< > != <= >= ֮��ģ������������ ����ֻ��ʾһ���� 
};
template<class T>
void Swap(T a,T b){
	T temp=a;
	a=b;
	b=temp;
}
 
int main(){
	pair2<int> p1;
	p1.first=10;
	p1.second=20;
	cout<<p1.first<<" "<<p1.second<<'\n'; 
	
	pair2<double> p2;
	p2.first=10.9;
	p2.second=20.6;
	cout<<p2.first<<" "<<p2.second<<'\n'; 
	
	//pair2 p3(10.1,1.2);���,��ʹ���캯�����ж������ͣ����ڽṹ�����֪�����Ͳ��ܴ��� 
	//pair2 p4;���,ʹ��ʱ����ָ������ 
	
	//�ٸ����� 
	int a=10,b=20,c=30.5,d=40.6;
	Swap(a,b);
	cout<<a<<" "<<b<<'\n'; 
	Swap(c,d);
	cout<<c<<" "<<d<<'\n';
	//Swap(a,c) ��ģ���Ϊ�������ͱ�������֪�������������ͣ�����ǿ������ת��
	
	//pairҲ�ǿ���Ƕ�׵ģ�����˵�����ά����
	//�ҵ�pair2�޷�ʵ����ά���ֻ꣬��2��n�η��� 
	pair<int,pair<int,int>> pos1;
	pos1.first=1;
	pos1.second.first=2;
	pos1.second.second=3;
	cout<<"x1="<<pos1.first<<"y1="<<pos1.second.first<<"z1="<<pos1.second.second<<'\n';
	
	pair<int,pair<int,int>> pos2(1,make_pair(2,3));//������make_pair������ʼ����ֵ
	//pos2(1,2,3)��pos2(1,(2,3))�������ǲ��е�,����û�������Ĺ��캯�� 
	cout<<"x2="<<pos2.first<<"y2="<<pos2.second.first<<"z2="<<pos2.second.second<<'\n';
	
	pos2.second.first=4;
	if(pos1<pos2){
		cout<<"pos1<pos2\n";
	}else{
		cout<<"pos1>=pos2\n";
	}
	//���Կ���,pair���ȱȽ�first,���firstһ����ͱ�second,�׻����ǰ��ֵ������е�,�д�С��ϵ�Ϳ��Խ���������
	//������sort����
	vector<pair<int,pair<int,int>>>vt;//��̬����,���»����ϸ�Ľ��� 
	vt.push_back(pos1);
	vt.push_back(pos2);
	sort(vt.begin(),vt.end());//sortĬ�ϴ�С����less���� 
	for(auto x:vt){
		cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<'\n';
	}
	//����sort���Զ������������ڳ��ÿ⺯����д�� 
	return 0;
} 
