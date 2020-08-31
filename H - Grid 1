#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1e9 + 7;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> m(h);
  for (int i=0; i<h; i++)
    cin >> m[i];
  vector<vector<long long>> v(h, vector<long long>(w));
  v[0][0] = 1ll;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (j>0 && m[i][j-1]=='.')
        v[i][j] += v[i][j-1];
      if (i>0 && m[i-1][j]=='.')
        v[i][j] += v[i-1][j];

      v[i][j] %= MOD; 
    }
  }
  cout << v[h-1][w-1] << endl;
  return 0;
}
