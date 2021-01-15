#include <iostream>

using namespace std;

int main() {
	int test;
	int car;
	int options;
	int q, p;
	int sum = 0;
	cin >> test;
	
	
	for (int i = 0; i < test; i++) {
		cin >> car;
		cin >> options;
		for (int j = 0; j < options; j++) {
			cin >> q >> p;
			sum += p * q;
		}
		if (options == 0) { sum = 0; }
		cout << car + sum << endl;
		sum = 0;
	}
}