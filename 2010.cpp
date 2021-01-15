#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long int N;
const int Max = 500000;
vector<int> multitab(Max);

int maxComputer() {
	int result = multitab[0];
	for (int i = 1; i < N; i++) {
		result -= 1;
		result += multitab[i];
	}

	return result;
}

int main() {
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> multitab[i];
	}

	
	cout << maxComputer();
	return 0;
}