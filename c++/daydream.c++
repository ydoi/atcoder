// https://atcoder.jp/contests/abc049/tasks/arc065_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<string> words = {"dream", "erase", "dreamer", "eraser"};
  for (int i = 0; i < 4; i++) {
    reverse(words.at(i).begin(), words.at(i).end());
  }
  reverse(S.begin(), S.end());

  string result = "YES";
  for (int i = 0; i < S.length();) {
    bool remove_flag = false;
    for (auto w : words) {
      if (S.substr(i, w.length()) == w) {
        remove_flag = true;
        i += w.length();
      }
    }
    if (!remove_flag) {
      result = "NO";
      break;
    }
  }
  
  cout << result << endl;
}