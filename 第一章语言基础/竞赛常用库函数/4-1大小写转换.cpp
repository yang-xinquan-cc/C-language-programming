#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="AbCdEf";
	cout<<str<<'\n';
	if(isupper(str[0])){
		cout<<str[0]<<"�Ǵ�д��ĸ"<<'\n';
	}else if(islower(str[0])){
		cout<<str[0]<<"��Сд��ĸ"<<'\n';
	}
	cout<<str<<'\n';
	for(int i=0;i<str.length();++i){
		str[i]=tolower(str[i]);
	}
	cout<<"Сд:"<<str<<'\n';
	for(int i=0;i<str.length();++i){
		str[i]=toupper(str[i]);
	}
	cout<<"��дд:"<<str<<'\n';
	
	return 0;
} 
