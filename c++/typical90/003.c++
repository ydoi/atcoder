//  https://atcoder.jp/contests/typical90/tasks/typical90_c
#include<bits/stdc++.h>
using namespace std;
 
using Graph = vector<vector<int>>;
 
// treeDFS(親, 現在地, 根から現在地までの距離, 根からの最大の距離, 根から最大の距離となる頂点
void treeDFS(int from, int current, int dist, int &maxDist, int &maxVertex, Graph &G) {
  // 距離と終点を更新
  if (dist > maxDist) {
    maxDist = dist;
    maxVertex = current;
  }
 
  for (auto to : G[current]) {
    // 逆流を防ぐ
    if (to == from) continue;
    treeDFS(current, to, dist + 1, maxDist, maxVertex, G);
  }
}
 
void getTreeDiameter(Graph &G) {
  int start = 0, end = 0, maxDist = 0;
  treeDFS(-1, start, 0, maxDist, end, G);
  start = end, end = 0, maxDist = 0;
   treeDFS(-1, start, 0, maxDist, end, G);
  // 最終的にmaxDistに木の直径が入る
  cout << maxDist + 1 << endl;
}
 
 
int main() {
  int N;
  cin >> N;
  int a, b;
  Graph G(N);
  for (int i = 0; i < N - 1; ++i){
    cin >> a >> b;
    --a; --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  getTreeDiameter(G);
  
}