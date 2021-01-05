// https://atcoder.jp/contests/abc175/tasks/abc175_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  //reverse(data.begin(), data.end());
  int ans = 0;
  for (int i = 0; i < N - 2; i++) {
    for (int j = i + 1 ; j < N - 1; j++) {
      for (int k = j + 1; k < N; k++) {
        // vector<int> tri = {data.at(i), data.at(j), data.at(k)};
        if (data.at(i) < data.at(j) &&
            data.at(j) < data.at(k) &&
            data.at(i) + data.at(j) > data.at(k)) ans++;
      }
    }
  }

  cout << ans << endl;
}