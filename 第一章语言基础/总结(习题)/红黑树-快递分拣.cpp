//�����
//��ݷּ�
//https://www.lanqiao.cn/problems/1531/learning/?page=1&first_category_id=1&problem_id=1531
#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios::sync_with_stdio(0),cout.tie(0),cout.tie(0);
  map<string,vector<string>>mp;
  //���ݳ�������¼�ʼ�,���Ա�����map
  //��������Ǹ��������ĳ�����
  //�ʻ���Ҫvector������е�˳�� 
  vector<string> pos;
  int n;
  cin>>n;
  string a,b;
  for(int i=0;i<n;++i){
    cin>>a>>b;
    if(mp.find(b)==mp.end()){
      pos.push_back(b);
    }
    mp[b].push_back(a);
  }
  for(auto nowpos:pos){
    cout<<nowpos<<" "<<mp[nowpos].size()<<'\n';
    for(auto di:mp[nowpos]){
      cout<<di<<'\n';
    }
  }
  return 0;
}
