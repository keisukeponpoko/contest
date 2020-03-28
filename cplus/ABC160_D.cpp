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

  int counts[n];
  for (int i = 0; i < n; ++i) counts[i] = 0;

  for (int i = 1; i <= n; ++i) {
    int pos = 0;
    for (int j = i+1; j <= n; ++j) {
      if (i <= x && y <= j) {
        pos = x - i + j - y + 1;
      } else if (i <= x && j <= x) {
        pos = j - i;
      } else if (y <= i && y <= j) {
        pos = j - i;
      } else {
        if (abs(x - i) + abs(y - j) + 1 < (j - i)) {
          pos = abs(x - i) + abs(y - j) + 1;
        } else {
          pos = j - i;
        }
      }
      counts[pos] += 1;
    }
  }

  for (int i = 1; i < n; ++i) {
    cout << counts[i] << endl;
  }

  return 0;
}
