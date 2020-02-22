// https://atcoder.jp/contests/dp/tasks/dp_a
# include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define scn(n) scanf("%d", &n)
#define pri(n) printf("%d",n)
#define priln(n) printf("%d\n",n)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int gcd(int a,int b) { return b ? gcd(b,a%b) : a; }

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

// もらうDP
int main()
{
  int n;
  scn(n);

  int a[n];
  rep(i, n) scn(a[i]);
  vector<int> vec(n);
  rep(i, n) vec[i] = a[i];

  pri(dplan(vec));
  return 0;
}
