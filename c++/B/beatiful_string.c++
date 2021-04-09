// https://atcoder.jp/contests/abc044/tasks/abc044_b
#include<bits/stdc++.h>
using namespace std;

int main (){
  string w; cin >> w;
  map<char, int> data;
  string ans = "Yes";
  for (int i = 0; i < w.size(); ++i) {
    char now = w.at(i);
    data[now] += 1; 
  }
  for (auto c : data) {
    //cout << c.first << endl;
    if (c.second % 2 != 0) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}