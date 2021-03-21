#include <iostream>
#include <algorithm>

using namespace std;

int A[1001];
int dp[1001];

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int ans = -1;

	// dp[i] = max(dp[j]) + 1
	for (int i = 0; i < N; i++) {
		dp[i] = 1; // default : minimun value 
		for (int j = 0; j < i; j++) {
			if(A[j] < A[i] && dp[i] < dp[j]+1) // A[j], for all j 
				dp[i] = dp[j] + 1;
		}
		if (dp[i] > ans) { ans = dp[i]; }
	}

	cout << ans << endl;
}
