#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	if (gcd(num1, num2) != 1) {
		if (num1 > num2) {
			if (num1 % num2 == 0)
				cout << "multiple";
		}
		else {
			if (num2 % num1 == 0)
				cout << "factor";
		}
	}
	
	else {
		cout << "neither";
	}


}
// unsolved!