// https://atcoder.jp/contests/abc183/tasks/abc183_c
#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  vector<vector<int>> data(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> data.at(i).at(j);
    }
  }
  
  int ans = 0;
  vector<int> cities(N);
  for (int i = 0; i < N; i++) {
    cities.at(i) = i;
  }
  do {
    if (cities.at(0) != 0) continue;
    int sum = 0;
    for (int i = 0; i < N; i++) {
      //cout << cities.at(i);
      // 往路
      if (i == N - 1) {
        sum += data.at(cities.at(i)).at(0);
      } else {
        sum += data.at(cities.at(i)).at(cities.at(i + 1));
      }
    }
    //cout << endl;
    if (sum == K) ans++;
  } while (next_permutation(cities.begin(), cities.end()));
  
  cout << ans << endl;
}