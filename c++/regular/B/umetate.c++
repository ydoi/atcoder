// https://atcoder.jp/contests/arc031/tasks/arc031_2
#include<bits/stdc++.h>
using namespace std;

void dfs(int x, int y, vector<vector<char>> &data) {
  vector<int> dx = {-1, 0, 1, 0};
  vector<int> dy = {0, 1, 0, -1};
  
  data.at(x).at(y) = 'x';
  
  for (int i = 0; i < 4; ++i) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (0 <= nx && nx < 10 && 0 <= ny && ny < 10
        && data.at(nx).at(ny) == 'o') {
      dfs(nx, ny, data);
    }
  }
}

bool check_unreached(int x, int y, vector<vector<char>> data) {
  data.at(x).at(y) = 'o';
  int count = 0;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (data.at(i).at(j) == 'o') {
        // 島が繋がっているなら1回目だけヒット
        count++;
        // 到達できる部分をxに書き換える
        dfs(i, j, data);
      }
    }
  }
  return count == 1 ? true : false;
}

int main(){
  // 入力
  vector<vector<char>> data(10, vector<char>(10, 'x'));
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) cin >> data.at(i).at(j);
  }
 
  string ans = "NO";
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (check_unreached(i, j, data)) {
        ans = "YES";
      }
    }
  }
  cout << ans << endl;
}