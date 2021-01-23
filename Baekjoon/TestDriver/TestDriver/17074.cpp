#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main() {

	std::ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> vec(N + 2, 0);
	vec[0] = -1000000000;
	vec[N + 1] = 1000000000;

	int ans = 0;
	int cnt = 0;
	int before_dec = 0;
	int after_dec = 0;
	for (int i = 1; i <= N; i++) {
		cin >> vec[i];

		if (vec[i] < vec[i - 1]) {
			cnt++;
			before_dec = i - 1;
			after_dec = before_dec + 1;
		}
	}

	if (cnt == 0)    ans = N;
	else if (cnt > 1)    ans = 0;
	else {
		if (vec[before_dec - 1] <= vec[after_dec])    ans++;
		if (vec[before_dec] <= vec[after_dec + 1])    ans++;
	}
	cout << ans << endl;
	return 0;
}


/*
* 시간 초과 버전!
* 
// 벡터가 오름차순으로 되어 있는지 확인하는 함수
bool Sortlist(const vector<int> v) {
	bool result = true;
	int Size = v.size();
	for (unsigned i = 0; i < Size - 1; i++)
		if (v[i] > v[i + 1])
			result = false;
	return result;
}

int main() {
	int N;
	int count = 0;
	cin >> N;
	vector<int> list(N);
	vector<int> copylist(N + 1);
	list.push_back(1000000000);

	for (int i = 0; i < N; i++) {
		cin >> list[i];
	}
	
	bool erase = false;
	// 백터의 index 제거해서 오름차순인지 확인하기!!
	for (int i = 0; i < N; i++) {
		copylist = list;
		
		copylist.erase(copylist.begin() + i);
			
		if (Sortlist(copylist))
			count++;
	
		copylist.push_back(0);
	}
	
	cout << count;

	return 0;
}*/