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
  double l;
  cin >> l;

  double p = l / 3;
  printf("%.12lf\n", p * p * p);

  return 0;
}
