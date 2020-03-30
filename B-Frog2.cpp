#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int dp[n];
	vector<int> cost(n);

	for (int i=0; i<n; i++) 
		scanf("%d", &dp[i]);

	int minc;

	for (int i=1; i<n; i++) {
		minc = INT_MAX;
		for (int j=1; j<=k && i-j>=0; j++) {
			minc = min(minc, cost[i-j]+abs(dp[i]-dp[i-j]));
		}
		cost[i] = minc;
	}
	
	cout << cost[n-1] << endl;

	return 0;
}
