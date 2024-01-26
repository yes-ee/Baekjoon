#include <iostream>

using namespace std;

int n, sum;
int dp[1000][10];

int main() {
	cin >> n;

	for (int i = 0; i <= 9; i++)
		dp[0][i] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = j; k <=9; k++) {
				dp[i][j] += dp[i-1][k];
				dp[i][j] %= 10007;
			}
		}
	}

	for (int i = 0; i <= 9; i++)
		sum += dp[n - 1][i];
	
	cout << sum % 10007;

	return 0;
}