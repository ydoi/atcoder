// https://atcoder.jp/contests/abc091/tasks/abc091_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int M;
  cin >> M;
  map<string, int> data;
  for (int i = 0; i < M; i++) {
    string card;
    cin >> card;
    if (data.count(card)) {
      data[card] += 1;
    } else {
      data[card] = 1;
    }
  }
  
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    string card;
    cin >> card;
    if (data.count(card)) {
      data[card] -= 1;
    } else {
      data[card] = -1;
    }
  }
  
  int ans = 0;
  for (auto i : data) {
    if (i.second > ans) ans = i.second;
  }
  cout << ans << endl;
}