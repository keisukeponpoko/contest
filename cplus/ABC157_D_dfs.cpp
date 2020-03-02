// DFS, BFS で実装。

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

vector<int> groups;
vector<vector<int>> connects;

// 再帰を使った実装
void dfs2(int val, int no)
{
  groups[val] = no;

  for (auto next_val : connects[val]) {
    if (groups[next_val] >= 0) continue;
    dfs2(next_val, no);
  }
}

// Stackを使った実装
void dfs(int val, int no)
{
  stack<int> st;
  st.push(val);
  while(!st.empty()) {
    int k = st.top();
    groups[k] = no;
    st.pop();
    for (auto next_val : connects[k]) {
      if (groups[next_val] >= 0) continue;
      st.push(next_val);
    }
  }
}


// Queueを使った実装
void bfs(int val, int no)
{
  queue<int> que;
  que.push(val);
  while(!que.empty()) {
    int k = que.front();
    groups[k] = no;
    que.pop();
    for (auto next_val : connects[k]) {
      if (groups[next_val] >= 0) continue;
      que.push(next_val);
    }
  }
}

int main()
{
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> friends(n, 0);
  vector<int> blocks(n, 0);
  vector<int> counts(n, 0);
  connects.resize(n);
  groups.resize(n);
  groups.assign(n, -1);
  for(int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    connects[a - 1].push_back(b - 1);
    connects[b - 1].push_back(a - 1);
    friends[a - 1]++;
    friends[b - 1]++;
  }

  int no = 0;
  for (int i = 0; i < n; ++i) {
    if (groups[i] >= 0) continue;

    dfs(i, no);
    no += 1;
  }

  for (int i = 0; i < n; ++i) {
    counts[groups[i]]++;
  }

  for(int i = 0; i < k; ++i) {
    int a, b;
    cin >> a >> b;
    if(groups[a - 1] == groups[b - 1]){
      blocks[a - 1]++;
      blocks[b - 1]++;
    }
  }

  for(int i=0;i<n;++i){
		cout << counts[groups[i]] - 1 - friends[i] - blocks[i];
		if(i != n-1) cout << " ";
	}

  return 0;
}
