#include <iostream>

using namespace std;

long long mod = 1000000000;
long long dp[201][201];

int main() {
	int N, K;
	cin >> N >> K;

	// dp[K][N] = sigma (dp[k-1][N-L])
	dp[0][0] = 1LL;
	for (int i = 1; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			for (int l = 0; l <= j; l++) {
				dp[i][j] += dp[i - 1][j - l];
				dp[i][j] %= mod;
			}
		}
	}

	cout << dp[K][N] << endl;
}