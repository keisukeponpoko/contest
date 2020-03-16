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
  int A, B, M;
  cin >> A >> B >> M;

  int ap[A];
  int bp[B];
  for(int i = 0; i < A; ++i) cin >> ap[i];
  for(int i = 0; i < B; ++i) cin >> bp[i];

  int price = *min_element(ap, ap + A) + *min_element(bp, bp + B);

  int xp[M];
  int yp[M];
  int cp[M];
  for(int i = 0; i < M; ++i) {
    int x, y, c;
    cin >> x >> y >> c;
    int new_price = ap[x - 1] + bp[y - 1] - c;
    chmin(price, new_price);
  }

  cout << price << endl;

  return 0;
}
