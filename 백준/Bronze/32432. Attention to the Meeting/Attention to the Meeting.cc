#include <bits/stdc++.h>

using namespace std;

int n, k;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;

	k -= (n - 1);

	cout << k / n;

	return 0;
}