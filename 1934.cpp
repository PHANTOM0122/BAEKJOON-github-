#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int N;
	cin >> N;
	int num1, num2;
	for (int i = 0; i < N; i++) {
		cin >> num1 >> num2;
		cout << lcm(num1, num2) << endl;
	}
	return 0;
}