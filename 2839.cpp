#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	bool result = false;
	int five, three;

	for (int i = 0; i <= N / 5; i++) {
		for (int j = 0; j <= N / 3; j++) {
			if ((5 * i) + (3 * j) == N) {
				result = true; 
				five = i, three = j;
				break;
			}
		}
	}

	if(result)
		cout << five + three;
	
	if(!result) {
		cout << -1;
	}
	
	return 0;
}

// solved!
/*
* 2차 방정식을 푸는 문제였는데, 이중 for문을 사용하여 해가 존재하거나 존재하지 않음을 판별하는게 point!
*/