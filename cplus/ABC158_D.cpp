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
  int Q;
  cin >> str >> Q;

  string front;
  string back;
  bool is_re = false;
  for (int i = 1; i <= Q; ++i) {
    int j = Q - i;
    int t;
    cin >> t;
    if (t == 1) {
      is_re = !is_re;
    } else {
      int f; char c;
      cin >> f >> c;

      if (f == 1 && !is_re || f == 2 && is_re) {
        front.push_back(c);
      } else {
        back.push_back(c);
      }
    }
  }

  if (is_re) {
    reverse(str.begin(), str.end());
    reverse(back.begin(), back.end());
    cout << back + str + front << endl;
  } else {
    reverse(front.begin(), front.end());
    cout << front + str + back << endl;
  }

  return 0;
}
