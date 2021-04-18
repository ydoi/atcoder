// https://atcoder.jp/contests/abc004/tasks/abc004_2
#include<bits/stdc++.h>
using namespace std;
int main () {
  vector<vector<string>> data(4, vector<string>(4));
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      cin >> data.at(i).at(j);
    }
  }
  
  for (int i = 3; i >= 0; --i) {
    for (int j = 3; j >= 0; --j) {
      cout << data.at(i).at(j);
      if (!(i == 0 && j == 0)) cout << " ";
    }
    cout << endl;
  }
}