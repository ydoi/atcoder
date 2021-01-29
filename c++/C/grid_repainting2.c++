// https://atcoder.jp/contests/abc096/tasks/abc096_c
#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<vector<char>> data(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> data.at(i).at(j);
    }
  }
  
  string ans = "Yes";
  
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (data.at(i).at(j) == '.') {
        continue;
      } else {
        if (i >= 1 && data.at(i - 1).at(j) == '.' &&
            j < W - 1 && data.at(i).at(j + 1) == '.'  &&
            i < H - 1 && data.at(i + 1).at(j) == '.' &&
            j >= 1 && data.at(i).at(j - 1) == '.') {
          ans = "No";
        }
      }
    }
  }
  
  cout << ans << endl;
}