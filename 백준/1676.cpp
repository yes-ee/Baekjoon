#include <iostream>

using namespace std;

int n, cnt;

int main() {
	cin >> n;

	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}

	cout << cnt;
	return 0;
}