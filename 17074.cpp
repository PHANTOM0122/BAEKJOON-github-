#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ���Ͱ� ������������ �Ǿ� �ִ��� Ȯ���ϴ� �Լ�
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
	// ������ index �����ؼ� ������������ Ȯ���ϱ�!!
	for (int i = 0; i < N; i++) {
		copylist = list;
		
		copylist.erase(copylist.begin() + i);
			
		if (Sortlist(copylist))
			count++;
	
		copylist.push_back(0);
	}
	
	cout << count;

	return 0;
}