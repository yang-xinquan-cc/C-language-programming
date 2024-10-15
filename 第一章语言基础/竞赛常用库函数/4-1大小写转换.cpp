#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="AbCdEf";
	cout<<str<<'\n';
	if(isupper(str[0])){
		cout<<str[0]<<"是大写字母"<<'\n';
	}else if(islower(str[0])){
		cout<<str[0]<<"是小写字母"<<'\n';
	}
	cout<<str<<'\n';
	for(int i=0;i<str.length();++i){
		str[i]=tolower(str[i]);
	}
	cout<<"小写:"<<str<<'\n';
	for(int i=0;i<str.length();++i){
		str[i]=toupper(str[i]);
	}
	cout<<"大写写:"<<str<<'\n';
	
	return 0;
} 
