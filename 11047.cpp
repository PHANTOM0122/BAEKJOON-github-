#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	int maxcoinPosition;
	int count = 0; int total_count = 0;
	cin >> N >> K;
	vector<int> coin(N);

	for (int i = 0; i < N; i++) {
		cin >> coin[i];
		if (coin[i] < K) {
			maxcoinPosition = i;
		}
	}
	
	for (int i = maxcoinPosition; i >= 0; i--) {
		
		
		// 가장 큰 단위의 동전으로 나누기
		count = K / coin[i];
		K -= (count * coin[i]);
		total_count += count;

		if (K <= 0)
			break;
	}
	
	cout << total_count;

} // solved!