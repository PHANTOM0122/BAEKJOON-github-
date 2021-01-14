#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> book(9);
	int total;
	int sum = 0;

	cin >> total;
	for (int i = 0; i < 9; i++) {
		cin >> book[i];
		sum += book[i];
	}

	cout << total - sum << endl;
}