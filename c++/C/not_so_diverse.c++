// https://atcoder.jp/contests/abc081/tasks/arc086_a
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  map<int, int> type_count;
  for (int i = 0; i < N; i++) {
    int c;
    cin >> c;
    if (type_count.count(c)) {
      type_count[c]++;
    } else {
      type_count[c] = 1;
    }
  }
  
  vector<int> count(0);
  for (auto i : type_count) {
    count.push_back(i.second);
  }
  
  sort(count.begin(), count.end());
  
  int ans = 0;
  int reduce_count = type_count.size() - K;
  if (reduce_count > 0) {
    for (int i = 0; i < reduce_count; i++) {
      ans += count.at(i);
    }
  }
  
  cout << ans << endl;
}