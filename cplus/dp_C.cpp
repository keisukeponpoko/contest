// https://atcoder.jp/contests/dp/tasks/dp_b
# include <bits/stdc++.h>
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
int gcd(int a,int b) { return b ? gcd(b, a % b) : a; }

int main()
{
  int n, k;
  scn(n);
  scn(k);

  int a[n];
  rep(i, n) scn(a[i]);

  int dp[n];
  rep(i, n) dp[i] = INF;
  dp[0] = 0;

  rep(i, n - 1) {
    reps(j, k) {
      if (i + j < n) {
        chmin(dp[i+j], dp[i] + abs(a[i+j] - a[i]));
      }
    }
  }

  pri(dp[n - 1]);
  return 0;
}
