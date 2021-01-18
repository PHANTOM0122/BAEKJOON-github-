#include <iostream>

using namespace std;

int Fibonacci(int n) {
	if (n == 0)
		return 1;
	else
		return n * Fibonacci(n - 1);
}

int main() {
	int N;
	cin >> N;

	cout << Fibonacci(N);
}

// Solved!