#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// 最大公約数
ll gcd(ll a,ll b) { return b ? gcd(b, a%b) : a; }

int main()
{
  int k;
  cin >> k;

  ll ans = 0;
  for (int i = 1; i <= k; ++i) {
    for (int j = 1; j <= k; ++j) {
      for (int l = 1; l <= k; ++l) {
        ans += gcd(i, gcd(j, l));
      }
    }
  }

  cout << ans << endl;

  return 0;
}
