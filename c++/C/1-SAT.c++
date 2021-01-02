// https://atcoder.jp/contests/abc187/tasks/abc187_c

#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> data(N);
  for (int i = 0; i < N; i++) cin >> data.at(i);
  sort(data.begin(), data.end());
  map<string, int> data_map;
  
  string ans = "satisfiable";
  for (int i = 0; i < N; i++) {
    string str = data.at(i);
    if (str.at(0) == '!') {
      data_map[str.substr(1)] = 1;
    } else {
      if (data_map.count(str) > 0 && data_map.at(str) == 1) {
        ans = str;
        break;
      };
    }
  }
  
  cout << ans << endl;
}