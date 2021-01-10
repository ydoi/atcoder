// https://atcoder.jp/contests/abc188/tasks/abc188_c
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> battle(vector<pair<int, int>> data) {
  //for (int i = 0; i < data.size(); i++) cout << data.at(i).second;
  //cout << endl;
  if (data.size() == 2) return data;
  vector<pair<int, int>> result(0);
  for (int i = 0; i < data.size() ; i++) {
    if (i % 2 != 0) continue;
    if (data.at(i).second > data.at(i + 1).second) {
      result.push_back(data.at(i));
    } else {
      result.push_back(data.at(i + 1));
    }
  }

  return battle(result);
}


int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> data(pow(2, N));
  for (int i = 0; i < 1 << N; i++) {
    int rating;
    cin >> rating;
    data.at(i) = make_pair(i, rating);
  }
  vector<pair<int, int>> final = battle(data);
  int ans = final.at(0).second > final.at(1).second ?
    final.at(1).first + 1 :
    final.at(0).first + 1;
  
  cout << ans << endl;
}