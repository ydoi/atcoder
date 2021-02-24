// https://atcoder.jp/contests/abc002/tasks/abc002_4
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<bool>> data(N, vector<bool>(N, 0));
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    data.at(x - 1).at(y - 1) = 1;
    data.at(y - 1).at(x - 1) = 1;
  }
  
  int ans = 0;
  for (int bit = 0; bit < (1 << N); bit++) {
    bool not_faction = 0;
    cout << not_faction << endl;
    vector<int> faction;
    for (int i = 0; i < N; i++) {
      if (bit & (1 << i)) faction.push_back(i);
    }
    
    for (int i = 0; i < faction.size(); i++) {
      for (int j = i + 1; j < faction.size(); j++) {
        if (data.at(faction.at(i)).at(faction.at(j)) == 0) not_faction = 1;
      }
    }
    
    if (not_faction == 0 && ans < faction.size()) {
      ans = faction.size();
    }
  }
  
  cout << ans << endl;
}