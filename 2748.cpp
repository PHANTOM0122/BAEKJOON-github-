#include <iostream>

using namespace std;

long long int Fibonacci(int index) {
	if (index == 0)
		return 0;
	else if (index == 1)
		return 1;
	else
		for (int i = 0; i < index; i++) {
			return Fibonacci(index - 1) + Fibonacci(index - 2);
		}
}

int main() {
	int n; 
	long long int* Fibonacci_list;
	cin >> n;
	Fibonacci_list = new long long int [n];
	cout << Fibonacci(n);
	for (int i = 0; i < n; i++){
		Fibonacci_list[i] = Fibonacci(i);
	}
	delete Fibonacci_list;

	return 0;
}
//solved!!