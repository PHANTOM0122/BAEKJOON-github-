#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	vector<int> list;
	int num1, num2, min;
	int sum = 0;
	cin >> num1;
	cin >> num2;

	int sqrt_num1 = sqrt(num1);
	int sqrt_num2 = sqrt(num2);


	for (int i = sqrt_num1; i <= sqrt_num2; i++) {
		if (pow(i, 2) >= num1 && pow(i, 2) <= num2) {
			sum += i * i;
			list.push_back(i * i);
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl;;
		cout << list[0] << endl;
	}
	return 0;
}