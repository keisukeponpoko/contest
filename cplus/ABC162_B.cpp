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

  ll ans = 0;
  for (ll i = 1; i <= n; ++i) {
    if (i % 3 == 0) continue;
    if (i % 5 == 0) continue;
    ans += i;
  }

  cout << ans << endl;

  return 0;
}
