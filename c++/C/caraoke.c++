// https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c
#include<bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> data(N, vector<int>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> data.at(i).at(j);
    }
  }
  
  // combination
  vector<bool> v(M);
  fill(v.end() - 2, v.end(), true);
  
  long long ans = 0;
  do {
    int first = -1;
    int second = -1;
    for (int i = 0; i < M; i++) {
      if (v[i]) {
        if (first == -1) {
          first = i;
          continue;
        };
        if (second == -1) second = i;
      }
    }
    long long sum = 0;
    for (int i = 0; i < N; i++) {
      //cout << data.at(i).at(first) << ", ";
      //cout << data.at(i).at(second) << endl;      
      sum += max(data.at(i).at(first), data.at(i).at(second));
    }
    ans = max(ans, sum);
  } while (next_permutation(v.begin(), v.end()));
  
  cout << ans << endl;
}