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
  scn(n);

  int a[n];
  rep(i, n) scn(a[i]);

  pri(n);
  return 0;
}

// 最大公約数
ll gcd(ll a,ll b) { return b ? gcd(b, a%b) : a; }
// 最小公倍数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b;}

// 二分探索
int bs(int target, vector<int> list) {
  int left = 0, right = list.size() - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    int guess = list[mid];
    if (guess == target) return mid;
    if (guess > target) right = mid - 1; else left = mid + 1;
  }

  return -1;
}

// 動的計画法
int dplan(vector<int> list) {
  int size = list.size();

  vector<int> dp(size);
  rep(i, size) dp[i] = INF;
  dp[0] = 0;

  rep(i, size) {
    chmin(dp[i], dp[i - 1] + abs(list[i] - list[i - 1]));
    if (i > 1) chmin(dp[i], dp[i - 2] + abs(list[i] - list[i - 2]));
  }

  return dp[size - 1];
}

// 繰り返し自乗法（n^p を計算する）
// だが、MODがある場合が多いので、mod.cppのライブラリを利用し、加減乗除をした方が良い。
ll powpow(ll n, ll p) {
  if (p == 0) return 1;
  ll x = powpow(n, p / 2);
  x = x * x;
  if (p % 2 == 1) x = x * n;
  return x;
}

// 組み合わせ nCk
// だが、MODがある場合が多いので、mod.cppのライブラリを利用、加減乗除をした方が良い。
ll choose(int n, int a) {
  ll x = 1;
  ll y = 1;
  rep(i, a) {
    x = x * (n - i); // 分子はn-i
    y = y * (i + 1); // 分母はaの階乗
  }

  return x * powpow(y, 10000007 - 2);
}


// フェルマーの小定理



// 最短経路問題


// DFS（深さ優先探索）


// BFS（幅優先探索）
