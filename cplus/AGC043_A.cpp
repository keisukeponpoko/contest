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
  int H, W;
  cin >> H >> W;
  char mp[H][W];
  int dp[H][W][2];

  for (int i = 0; i < H; i++) {
    string input;
    cin >> input;
    for (int j = 0; j < W; j++) {
      mp[i][j] = input[j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      for (int k = 0; k < 2; k++) {
        dp[i][j][k] = INF;
      }
    }
  }

  int plus_s = (mp[0][0] == '#') ? 1 : 0;
  dp[0][0][plus_s] = plus_s;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      for (int k = 0; k < 2; k++) {
        if (dp[i][j][k] == INF) continue;

        if (i + 1 < H) {
          int new_k = (mp[i+1][j] == '#') ? 1 : 0;
          int plus = (k == 1) ? 0 : new_k;
          chmin(dp[i+1][j][new_k], dp[i][j][k] + plus);
        }

        if (j + 1 < W) {
          int new_k = (mp[i][j+1] == '#') ? 1 : 0;
          int plus = (k == 1) ? 0 : new_k;
          chmin(dp[i][j+1][new_k], dp[i][j][k] + plus);
        }
      }
    }
  }

  cout << min(dp[H-1][W-1][0], dp[H-1][W-1][1]) << endl;

  return 0;
}
