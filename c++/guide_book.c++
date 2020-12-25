// https://atcoder.jp/contests/abc128/tasks/abc128_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  // map<string, vector<int>> dic;
  vector<tuple<string, int, int>> data;
  
  for (int i = 0; i < n; i++) {
    string city;
    int score;
    cin >> city >> score;
    data.push_back(make_tuple(city, -score, i + 1));
  }
  
  sort(data.begin(), data.end());
  for (int i = 0; i < n; i++) {
    int no;
    tie(ignore, ignore, no) = data.at(i);
    cout << no << endl;
  }
}