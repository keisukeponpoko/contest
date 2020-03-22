#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e7) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
  int n;
  cin >> n;

  int a[n];
  vector<ll> counts(INF, 0);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    counts[a[i]] += 1;
  }

  ll sum = 0;
  for (int i = 0; i <= n; ++i) {
    if (counts[i] <= 1) continue;
    sum += counts[i] * (counts[i] - 1) / 2;
  }

  for (int i = 0; i < n; ++i) {
    cout << sum - counts[a[i]] + 1 << endl;
  }

  return 0;
}
