#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int countTwo(int n);
int countFive(int n);

int main() {
	int N;
	cin >> N;
	cout << min(countTwo(N), countFive(N));
}

int countTwo(int n) {
	int count = 0;
	for (int i = 2; i <= n; i *= 2) {
		for (int j = 1; j <= n; j++) {
			if (j%i==0) {
				count++;
			}
		}
	}
	return count;
}

int countFive(int n) {
	int count = 0;
	for (int i = 5; i <= n; i *= 5) {
		for (int j = 1; j <= n; j++) {
			if (j % i == 0) {
				count++;
			}
		}
	}
	return count;
}