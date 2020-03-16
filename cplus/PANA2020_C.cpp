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
  ll a, b, c;
  cin >> a >> b >> c;

  bool ans = sqrt(a) + sqrt(b) < sqrt(c);
  cout << sqrt(a) << endl;
  cout << sqrt(b) << endl;
  cout << sqrt(c) << endl;
  cout << sqrtf(a) << endl;
  cout << sqrtf(b) << endl;
  cout << sqrtf(c) << endl;

  if (ans == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
