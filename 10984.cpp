#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {
		int C, n = 0, sumC = 0;
		float G, sumG = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> C >> G;
			sumC += C;
			sumG += C*G;
		}
		printf("%d %.1f\n", sumC, round(10 * sumG / sumC) / 10);
	
	}
	
	return 0;
}