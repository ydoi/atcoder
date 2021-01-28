// https://atcoder.jp/contests/abc075/tasks/abc075_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h;
  cin >> w >> h;
  char box[w][h];
  for (int i = 0; i < w; i++) {
    string line;
    cin >> line;
    for (int j = 0; j < h; j++) {
      box[i][j] = line.at(j);
    }
  }
  
  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      int count = 0;
      if (box[i][j] == '#') {
        cout << "#";
        continue;
      }
      if (i >= 1 && j >= 1 && box[i-1][j-1] == '#') {
        // 左上
        count++;
      }
      if (box[i-1][j] == '#') {
        // 上
        count++;
      }
      if (i >= 1 && j < h - 1 && box[i-1][j+1] == '#') {
        // 右上
        count++;
      }
      if (j >= 1 && box[i][j-1] == '#') {
        // 左
        count++;
      }
      if (j < h - 1 && box[i][j+1] == '#') {
        // 右
        count++;
      }
      if (i < w - 1 && j >= 1 && box[i+1][j-1] == '#') {
        // 左下
        count++;
      }
      if (i < w - 1 && box[i+1][j] == '#') {
        // 下
        count++;
      }
      if (i < w - 1 && j < h - 1 && box[i+1][j+1] == '#') {
        // 右下
        count++;
      }
      cout << count;
    }
    cout << endl;
  }
}