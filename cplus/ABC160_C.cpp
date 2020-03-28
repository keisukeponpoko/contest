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
  int k, n;
  cin >> k >> n;
  int a[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int max_distance = 0;
  for (int i = 0; i < n; ++i) {
    int next_pos = (i+1 >= n) ? k + a[0] : a[i+1];
    int distance = abs(a[i] - next_pos);
    // cout << a[i] << "|" << next_pos << "|" << distance << endl;

    chmax(max_distance, distance);
  }

  cout << k - max_distance << endl;

  return 0;
}
