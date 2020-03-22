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
  string s;
  cin >> s;

  string ans = "Yes";

  int n = s.size();
  for (int i = 0; i < n; ++i) {
    if (s[i] != s[n-i-1]) {
      ans = "No";
      break;
    }
  }

  int n2 = (n - 1) / 2;
  for (int i = 0; i < n2; ++i) {
    if (s[i] != s[n2-i-1]) {
      ans = "No";
      break;
    }
  }

  int n3 = (n + 3) / 2 - 1;
  for (int i = n3; i < n; ++i) {
    if (s[i] != s[n-i-1]) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
