#include<bits/stdc++.h>
using namespace std;

int main () {
  // 入力
  int N, M, K;
  cin >> N >> M;
  vector<pair<int, int>> condition(M);
  for (int i = 0; i < M; i++) {
    int a = 0;
    int b = 0;
    cin >> a >> b;
    condition.at(i) = make_pair(a, b);
  }
  
  cin >> K;
  map<int, int> put_count;
  vector<pair<int, int>> put(K);
  for (int i = 0; i < K; i++) {
    int c = 0;
    int d = 0;
    cin >> c >> d;
    put_count[c]++;
    put_count[d]++;
    put.at(i) = make_pair(c, d);
  }
  
  // 回答
  set<int> selected;
  for (int i = 0; i < K ;i++) {
    if (selected.count(put.at(i).first) && selected.count(put.at(i).second)) {
      continue;
    } else if (selected.count(put.at(i).first)) {
      selected.insert(put.at(i).second);
    } else if (selected.count(put.at(i).second)) {
      selected.insert(put.at(i).first);
    }

    int first_count =  put_count[put.at(i).first];
    int second_count = put_count[put.at(i).second];
    
    if (first_count > second_count) {
      selected.insert(put.at(i).second);
    } else {
      selected.insert(put.at(i).first);
    }
  }
  
  int ans = 0;
  for (int i = 0; i < M; i++) {
    if (selected.count(condition.at(i).first) &&
        selected.count(condition.at(i).second)) {
      ans++;
    }
  }
  
  cout << ans << endl;
}