#include<bits/stdc++.h>
using namespace std;
//ǰ��Ҳ����ģ����(����)
//��� ��̬����vector
//vector��ͷ�ļ�<vector>�Ѿ�������bits/stdc++.h�� 
int main(){
	vector<int> vt1;
	vector<double> vt2; 
	vt1.push_back(10);
	vt1.push_back(20);
	vt1.push_back(30);//��̬��������
	
	vt2.push_back(1.1);
	vt2.push_back(1.2);
	vt2.push_back(1.3);
	
	//���ú���
	//vt.push_back(����);���������Ԫ�� 
	for(auto x:vt1){//Ҳ�е����� 
		cout<<x<<" "; 
	}cout<<'\n';
	//vt.pop_back();ɾ�����һ������ 
	vt1.pop_back();
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	vt1.push_back(0);
	//���� 
	sort(vt1.begin(),vt1.end());
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	//ȥ��
	vt1.push_back(10);
	//ǰ�潲����ȥ�ر�������������в����ÿ⺯��unique
	sort(vt1.begin(),vt1.end());
	vt1.erase(unique(vt1.begin(),vt1.end()),vt1.end());
	for(auto x:vt1){
		cout<<x<<" "; 
	}cout<<'\n';
	vt1.push_back(10);
	vt1.push_back(10);
	vt1.push_back(10);
	cout<<"vt1.size()="<<vt1.size()<<'\n';
	if(vt1.empty()){
		cout<<"vt1 is empty\n";
	}else{
		cout<<"vt1 is not empty\n"; 
	}
	//size��empty�������ж������Ƿ�Ϊ�գ�empty���죬size��on�ĸ��Ӷ�
	cout<<"vt1.capacity()="<<vt1.capacity()<<'\n';
	vt1.clear();
	cout<<"vt1.capacity()="<<vt1.capacity()<<'\n';
	//�ɴ˿ɼ�,clearֻ��������ݣ��ڴ���������8����λ,ÿ������������������������Ƶ������ 
	return 0;
}
