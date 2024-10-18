//优先队列priority_queue / multiset / map
//合并果子
//https://www.lanqiao.cn/problems/741/learning/?page=1&first_category_id=1&problem_id=741
#include <bits/stdc++.h>
using namespace std;

struct cmp {
	bool operator()(const int &a, const int &b) const {
		return a < b;
	}
};

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	map<int, int, cmp> mp;
	int n;
	cin >> n;
	int t;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		++mp[t];
	}
	int sum = 0;
	//size>1毋庸置疑
	//当size为1时 对应的数据可能不止一个mp.begin()->second > 1
	while (mp.size() > 1 || (mp.size() == 1 && mp.begin()->second > 1)) {
		auto it1 = mp.begin();
		while (it1!= mp.end() && it1->second == 0) {
			it1++;
		}
		if (it1 == mp.end()) {
			break;
		}
		int a = it1->first;
		int c = it1->second;
		if (c > 1) {
			it1->second--;
		} else {
			mp.erase(it1);
		}

		auto it2 = mp.begin();//auto it2 = it1;不能这么写会出错,因为如果当前数为0,会被mp.erase(it1)出错
		while (it2!= mp.end() && it2->second == 0) {
			it2++;
		}
		if (it2 == mp.end()) {
			break;
		}
		int b = it2->first;
		c = it2->second;
		if (c > 1) {
			it2->second--;
		} else {
			mp.erase(it2);
		}

		sum += a + b;
		mp[a + b]++;
	}
	cout << sum << '\n';
	return 0;
}
