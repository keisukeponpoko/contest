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
  int n;
  int A[3][3];
  int r[3][3];

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cin >> A[i][j];
    }
  }

  scn(n);
  int b[n];
  rep(i, n) scn(b[i]);

  rep(i, 3) {
    rep(j, 3) {
      r[i][j] = 0;
    }
  }

  rep(i, n) {
    rep(j, 3) {
      rep(k, 3) {
        if (A[j][k] == b[i]) r[j][k] = 1;
      }
    }
  }

  int cnt = 0;
  string ans = "No";

  rep(i, 3) {
    cnt = 0;
    rep(j, 3) {
      cnt += r[i][j];
    }
    if (cnt == 3) ans = "Yes";
  }

  rep(j, 3) {
    cnt = 0;
    rep(i, 3) {
      cnt += r[i][j];
    }
    if (cnt == 3) ans = "Yes";
  }

  cnt = 0;
  cnt += r[0][0];
  cnt += r[1][1];
  cnt += r[2][2];
  if (cnt == 3) ans = "Yes";

  cnt = 0;
  cnt += r[0][2];
  cnt += r[1][1];
  cnt += r[2][0];
  if (cnt == 3) ans = "Yes";

  cout << ans << endl;

  return 0;
}
