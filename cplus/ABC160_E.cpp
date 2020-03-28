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
  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;

  vector<ll> p(a);
  vector<ll> q(b);
  vector<ll> r(c);
  for (int i = 0; i < a; ++i) {
    cin >> p[i];
  }
  sort(p.begin(),p.end(),greater<ll>());
  for (int i = 0; i < b; ++i) {
    cin >> q[i];
  }
  sort(q.begin(),q.end(),greater<ll>());
  for (int i = 0; i < c; ++i) {
    cin >> r[i];
  }
  sort(r.begin(),r.end(),greater<ll>());

  vector<ll> total(x+y+c);
  for (int i = 0; i < x; ++i) {
    total[i] = p[i];
  }
  for (int i = 0; i < y; ++i) {
    total[x+i] = q[i];
  }
  for (int i = 0; i < c; ++i) {
    total[x+y+i] = r[i];
  }

  ll ans = 0;
  sort(total.begin(),total.end(),greater<ll>());
  for (int i = 0; i < x + y; ++i) {
    ans += total[i];
  }
  cout << ans << endl;

  return 0;
}
