// できない...

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
  int N, P;
  string S;
  cin >> N >> P >> S;

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      string str = S;
      string num = str.substr(i, j - i + 1);
      ll number = stoll(num);
      if (number % P == 0) cnt += 1;
    }
  }

  cout << cnt << endl;

  return 0;
}
