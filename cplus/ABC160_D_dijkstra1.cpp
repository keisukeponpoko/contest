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
  int n, x, y;
  cin >> n >> x >> y;

  vector<vector<int>> dist(n, vector<int>(n, INF));
  dist[x-1][y-1] = 1;
  dist[y-1][x-1] = 1;
  for (int i = 0; i < n; ++i) {
    if (i + 1 == n) continue;
    dist[i][i+1] = 1;
    dist[i+1][i] = 1;
  }

  vector<int> counts(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    vector<int> d(n, INF);
    vector<bool> used(n, false);
    d[i] = 0;
    while (true) {
      int v = -1;
      for (int j = 0; j < n; ++j) {
        if (!used[j] && (v == -1 || d[j] < d[v])) v = j;
      }

      if (v == -1) break;

      used[v] = true;

      for (int j = 0; j < n; ++j) {
        chmin(d[j], d[v] + dist[v][j]);
      }
    }

    for (int j = 0; j < n; ++j) counts[d[j]] += 1;

  }

  for (int i = 1; i < n; ++i) {
    cout << counts[i] / 2 << endl;
  }

  return 0;
}
