#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int N;
	cin >> N;
	int total = 0;
	vector<int> P(N);
	vector<int> sum(N);
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	// Sort
	for (int i = 0; i < N - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < N; j++) {
			if (P[j] < P[min_index])
				min_index = j;
		}
		if (min_index != i)
			swap(P[i], P[min_index]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
			sum[i] += P[j];
	}
	
	for (int elem : sum)
		total += elem;
	cout << total;
	return 0;
}