#include <iostream>
#include <algorithm>

using namespace std;

int A[1001];
int dp[1001];
int v[1001];

void go(int p) {
	// ? -> ? -> ... a[v[p]] -> a[p]
	if (p == -1) { return; }
	go(v[p]);
	cout << A[p] << ' ';
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}


	// dp[i] = max(dp[j]) + 1
	for (int i = 0; i < N; i++) {
		dp[i] = 1; // default : minimun value 
		v[i] = -1;
		for (int j = 0; j < i; j++) {
			if (A[j] < A[i] && dp[i] < dp[j] + 1) { // A[j], for all j 
				dp[i] = dp[j] + 1;
				v[i] = j;
			}
		}
	} 
	int ans = dp[0];
	int p = 0;
	for (int i = 0; i < N; i++) {
		if (ans < dp[i]) {
			ans = dp[i];
			p = i;
		}
	}

	cout << ans << endl;
	go(p);
	cout << endl;
}
