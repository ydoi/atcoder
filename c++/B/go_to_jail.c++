// https://atcoder.jp/contests/abc179/tasks/abc179_b
#include<bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  vector<pair<int, int>> data(N);
  for (int i = 0; i < N; i++) {
    int first, second; cin >> first >> second;
    data.at(i) = make_pair(first, second);
  }
  
  string ans = "No";
  for (int i = 2; i < N; i ++) {
    if (data.at(i - 2).first == data.at(i - 2).second &&
        data.at(i - 1).first == data.at(i - 1).second &&
        data.at(i).first == data.at(i).second) {
      ans = "Yes";
    }
  }
  
  cout << ans << endl;
}