// MODが存在する時の計算がマジでむずい。
// mod.cpp を利用するのが良い。

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

const long MOD = 1000000007;

// 繰り返し自乗法（n^p をMODありで計算する）
ll modpow(ll n, ll p) {
  if (p == 0) return 1;
  ll x = modpow(n, p / 2);
  x = x * x % MOD;
  if (p % 2 == 1) x = x * n % MOD;
  return x;
}

// 組み合わせ nCk mod
// aが十分小さい場合
ll choose(int n, int a) {
  ll x = 1;
  ll y = 1;
  rep(i, a) {
    x = x * (n - i) % MOD; // 分子はn-i
    y = y * (i + 1) % MOD; // 分母はaの階乗
  }

  return x * modpow(y, MOD - 2) % MOD;
}

int main()
{
  int n, a, b;
  scn(n);
  scn(a);
  scn(b);

  ll ans = modpow(2, n);
  ans -= 1;
  if ((ans += MOD-choose(n, a)) >= MOD) ans -= MOD;
  if ((ans += MOD-choose(n, b)) >= MOD) ans -= MOD;
  pri(ans);

  return 0;
}
