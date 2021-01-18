// https://atcoder.jp/contests/agc011/tasks/agc011_a
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, C, K;
  cin >> N >> C >> K;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  
  int ans = 0;
  int now_passenjers = 0;
  for (int i = 0; i < N; i++) {
    int current_time = data.at(i);
    int head_time = data.at(i - now_passenjers);
    if (now_passenjers == 0) {
      now_passenjers++;
      ans++;
    } else if (now_passenjers > 0 && now_passenjers < C) {
      if (current_time - head_time <= K) {
        now_passenjers++;
      } else {
        now_passenjers = 1;
        ans++;
      }
    } else {
      now_passenjers = 1;
      ans++;
    }
  }
  cout << ans  << endl;
}