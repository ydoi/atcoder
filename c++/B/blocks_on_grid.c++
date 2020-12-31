// https://atcoder.jp/contests/abc186/tasks/abc186_b
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int h, w;
  cin >> h >> w;
  
  vector<vector<int>> data(h, vector<int>(w));
    
  map<int, int> numbers;
  
  
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> data.at(i).at(j);
    }
  }
  
  int min_number = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (i == 0 && j == 0) min_number = data.at(i).at(j);
      if (min_number > data.at(i).at(j)) {
        min_number = data.at(i).at(j);
      }
    }
  }
  
  int remove_count = 0;
  int same_number = 0;
  int all_same = 0;
  for (int i = 0 ; i < h; i++) {
    for (int j = 0 ; j < w; j++) {
      if (data.at(i).at(j) != min_number) {
        remove_count += (data.at(i).at(j) - min_number);
      } else {
        all_same++;
      }
    }
  }

  if (all_same != h * w) {
    cout << remove_count << endl;
  } else {
    cout << "0" << endl;
  }
}