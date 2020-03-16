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
  string str;
  cin >> str;

  if (str.size() % 2 == 1) {
    cout << "No" << endl;
  } else {
    string ans = "Yes";
    bool is_one = true;
    for (int i = 0; i < str.size(); ++i) {
      if ((is_one && str[i] != 'h') || (!is_one && str[i] != 'i')) {
        ans = "No";
        break;
      }
      is_one = !is_one;
    }

    cout << ans << endl;
  }

  return 0;
}
