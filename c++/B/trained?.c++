// https://atcoder.jp/contests/abc065/tasks/abc065_b
#include<bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  vector<int> data(N + 1);
  for (int i = 1; i <= N; i++) cin >> data.at(i);
  
  int ans = 0;
  set<int> visited;
  visited.insert(1);
  int now = 1;
  
  while (true) {
    int now = data.at(now);
    if (now == 2) {
      ans++;
      break;
    }
    if (visited.count(now)) {
      ans = -1;
      break;
    } else {
      visited.insert(now);
      ans++;
    }
  }
  
  cout << ans << endl;
}
