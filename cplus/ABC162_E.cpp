// TLE です...
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

// 最大公約数
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }

const int mod = 1000000007;
struct mint {
  long long x; // typedef long long ll;
  mint(long long x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(long long t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res/=a;
  }
};

int n, k;
mint ans = 0;
void dfp(int cnt, ll num)
{
  if (cnt == n - 1) {
    mint new_ans;
    new_ans.x = num;
    ans += new_ans;
    return;
  }

  for (int i = 1; i <= k; ++i) {
    dfp(cnt + 1, gcd(num, i));
  }
}

int main()
{
  cin >> n >> k;

  for (int i = 1; i <= k; ++i) {
    dfp(0, i);
  }

  cout << ans.x << endl;

  return 0;
}
