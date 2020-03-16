#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e9) + 1;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, n) for(int i = 1; i <= (int)(n); i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

char alp[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
vector<string> answers;

void loop(string text, int num, int pos, int max, int max_use)
{
  text += alp[num];
  if (pos == max) {
    answers.push_back(text);
    return;
  } else {
    for (int i = 0; i < pos + 1; ++i) {
      if (i - max_use > 1) continue;
      loop(text, i, pos + 1, max, max_use < i ? i : max_use);
    }
  }
}

int main()
{
  int n;
  cin >> n;

  loop("", 0, 1, n, 0);
  for (auto val : answers) {
    cout << val << endl;
  }

  return 0;
}
