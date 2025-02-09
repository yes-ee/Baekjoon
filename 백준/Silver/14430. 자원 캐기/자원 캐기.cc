// dp

#include <iostream>

using namespace std;

int arr[301][301];
int dp[301][301];
int n, m;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + arr[i][j];
        }
    }

    cout << dp[n][m];
    return 0;
}