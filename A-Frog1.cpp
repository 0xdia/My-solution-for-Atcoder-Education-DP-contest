#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int dp[n];

	for (int i=0; i<n; i++)
		scanf("%d", &dp[i]);

	int cost1, cost2;
	cost1 = 0;
	cost2 = abs(dp[1] - dp[0]);

	for (int i=2; i<n; i++) {
		int x = cost2;
		cost2 = min(cost1+abs(dp[i]-dp[i-2]), cost2+abs(dp[i]-dp[i-1]));
		cost1 = x;
	}

	cout << cost2 << endl;
	
	return 0;
}
