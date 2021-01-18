#include <iostream>

using namespace std;

bool Prime(int n) {
	bool result = true;

	if (n == 1)
		result = false;

	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && n > i) {
			result = false;
		}
	}

	return result;
}

int main() {
	int N;
	int* Array;
	cin >> N;
	int count = 0;

	Array = new int [N];
	for (int i = 0; i < N; i++)
		cin >> Array[i];

	for (int i = 0; i < N; i++) {
		if (Prime(Array[i]))
			count++;
	}
	cout << count;

	delete[] Array;
}
// solved!