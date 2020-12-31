// https://atcoder.jp/contests/joi2010yo/tasks/joi2010yo_d
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> data(n);
  set<string> results;
  for (int i = 0; i < n; i++) {
    cin >> data.at(i);
  }
  sort(data.begin(), data.end());
  do {
    string result;
    for (int i = 0; i < data.size(); i++) {
      if (i < k) {
        result += to_string(data.at(i));
      }
    }
    results.insert(result);
  } while (next_permutation(data.begin(), data.end()));
  cout << results.size() << endl;
}