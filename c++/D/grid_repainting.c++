// https://atcoder.jp/contests/abc088/tasks/abc088_d
#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W; cin >> H >> W;
  vector<string> mp(H);
  int white_count = 0;
  for (int i = 0; i < H; ++i) {
    cin >> mp[i];
    for (int j = 0; j < W; ++j) {
      if (mp[i][j] == '.') white_count++;
    }
  }
  
  // BFS グラフの場合の頂点→迷路の位置をあらわすpair
  vector<vector<int>> dist(H, vector<int>(W, -1));
  queue<pair<int, int>> que;
  dist[0][0] = 1;
  que.push(make_pair(0, 0));
  
  vector<int> dx = { 0, 1, 0, -1 };
  vector<int> dy = { 1, 0, -1, 0 };

  while(!que.empty()) {
    pair<int, int> current = que.front();
    que.pop();
    for (int i = 0; i < 4; ++i) {
      int nx = current.first + dx[i];
      int ny = current.second + dy[i];
      if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
      if (mp[nx][ny] == '#') continue;
      if (dist[nx][ny] == -1) {
        dist[nx][ny] = dist[current.first][current.second] + 1;
        que.push(make_pair(nx, ny));
      }
    }
  }
  
  if (dist[H - 1][W - 1] == -1) cout << - 1 << endl;
  // 全ての白から最短経路を引いて埋める白を計算
  else cout << white_count - dist[H - 1][W - 1] << endl;
}