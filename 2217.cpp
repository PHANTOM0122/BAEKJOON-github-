#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a, int b) {
	if (a <= b)
		return b;
	else
		return a;
}

int main() {
	unsigned N;
	cin >> N;
	vector<int> list(N,0);
	

	for (int i = 0; i < N; i++)
		cin >> list[i];

	sort(list.begin(), list.end());


	int Weight = 0;
	for (int i = 0; i < N; i++) {
		Weight = max(Weight, list[i] * (N - i));
	}

	cout << Weight;
}
 // solved!