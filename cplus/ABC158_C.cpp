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
  int A, B;
  cin >> A >> B;

  int ans = -1;
  for (int i = 1; i <= 1000; ++i) {
    if (floor(i * 0.08) == A && floor(i * 0.1) == B) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
