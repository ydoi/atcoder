// https://atcoder.jp/contests/agc013/tasks/agc013_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  
  int ans = 0;
  string state = "start";
  for (int i = 1; i < N; i++) {
    if (state == "start") {
      if (data.at(i) > data.at(i - 1)) {
        state = "up";
      } else if (data.at(i) < data.at(i - 1)) {
        state = "down";
      }
    }
    
    if ((state == "up" && data.at(i) < data.at(i - 1)) ||
        (state == "down" && data.at(i) > data.at(i - 1))) {
      state = "start";
      ans++;
    }
  }
  cout << ans + 1 << endl;
}