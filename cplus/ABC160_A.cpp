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

  if (s.size() != 6) ans = "No";
  if (s[2] != s[3]) ans = "No";
  if (s[4] != s[5]) ans = "No";

  cout << ans << endl;

  return 0;
}
