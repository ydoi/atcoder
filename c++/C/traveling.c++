// https://atcoder.jp/contests/abc086/tasks/arc089_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> t(110000);
  vector<int> x(110000);
  vector<int> y(110000);
  
  t.at(0) = 0;
  x.at(0) = 0;
  y.at(0) = 0; 
  
  for (int i = 0; i < N; i++) {
    cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);
  }
  
  string result = "Yes";
  for (int i = 0; i < N; i++) {
    int dt = abs(t.at(i + 1) - t.at(i));
    int dist = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
    
    if (dist > dt)  result = "No";
    if (dt % 2 != dist % 2) result = "No";
  }
  cout << result << endl;
}