#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
#define scn(n) scanf("%d", &n)
#define scns(s) scanf("%s", &s)
#define pri(n) printf("%d", n)
#define priln(n) printf("%d\n", n)
#define pris(s) printf("%s", s)
#define prisln(s) printf("%s\n", s)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
  int n;
  scn(n);

  if (n % 2 == 0) {
    pri(n / 2);
  } else {
    pri(n / 2 + 1);
  }

  return 0;
}
