#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
#define scn(n) scanf("%d", &n)
#define scns(s) scanf("%s", &s)
#define pri(n) printf("%d", n)
#define priln(n) printf("%d\n", n)
#define pris(s) printf("%s", s)
#define prisln(s) printf("%s\n", s)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
  int n, m;
  scn(n);
  scn(m);
  int s[m];
  int c[m];

  for (int i; i < m; ++i) {
    cin >> s[i] >> c[i];
  }

  int d[n];
  rep(i, n) d[i] = -1;

  int check = 0;
  rep(i, m) {
    int pos = s[i] - 1;
    if (d[pos] >= 0 && d[pos] != c[i]) {
      check = 1;
      break;
    }

    d[pos] = c[i];
  }

  rep(i, n) {
    if (d[i] < 0) {
      if (i == 0 && n > 1) {
        d[i] = 1;
      } else {
        d[i] = 0;
      }
    }
  }

  if (check == 1 || (d[0] == 0 && n != 1)) {
    cout << -1 << endl;
  } else {
    rep(i, n) cout << d[i];
    cout << endl;
  }

  return 0;
}
