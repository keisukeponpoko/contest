#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
  int n;
  cin >> n;

  string s;
  cin >> s;

  int dp[n][3];
  for (int i = 0; i < n; ++i) {
    if (i == 0) {
      dp[i][0] = 0;
      dp[i][1] = 0;
      dp[i][2] = 0;
    } else {
      dp[i][0] = dp[i - 1][0];
      dp[i][1] = dp[i - 1][1];
      dp[i][2] = dp[i - 1][2];
    }
    if (s[i] == 'R') dp[i][0] += 1;
    if (s[i] == 'G') dp[i][1] += 1;
    if (s[i] == 'B') dp[i][2] += 1;
  }

  ll ans = 0;
  for (int i = 0; i < n - 2; ++i) {
    for (int j = i + 1; j < n - 1; ++j) {
      if (s[i] == s[j]) continue;

      int fail = j + j - i;
      if ((s[i] == 'G' && s[j] == 'B' ) || (s[j] == 'G' && s[i] == 'B')) {
        ans += dp[n-1][0] - dp[j][0];
        if (s[fail] == 'R') ans -= 1;
      }
      if ((s[i] == 'R' && s[j] == 'B' ) || (s[j] == 'R' && s[i] == 'B')) {
        ans += dp[n-1][1] - dp[j][1];
        if (s[fail] == 'G') ans -= 1;
      }
      if ((s[i] == 'R' && s[j] == 'G' ) || (s[j] == 'R' && s[i] == 'G')) {
        ans += dp[n-1][2] - dp[j][2];
        if (s[fail] == 'B') ans -= 1;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
