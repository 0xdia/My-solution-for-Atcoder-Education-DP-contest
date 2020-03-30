#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int a, b, c;
	int dp[3], v[3];
	cin >> n;

	scanf("%d%d%d", &dp[0], &dp[1], &dp[2]);  

	for (int i=1; i<n; i++) {
		scanf("%d%d%d", &a, &b, &c);

		v[0] = a + max(dp[1], dp[2]);
		v[1] = b + max(dp[0], dp[2]);
		v[2] = c + max(dp[0], dp[1]);

		dp[0] = v[0];
		dp[1] = v[1];
		dp[2] = v[2];
	}

	cout << max(max(dp[0], dp[1]), dp[2]) << endl;

	return 0;
}
