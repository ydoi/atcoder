// https://atcoder.jp/contests/agc010/tasks/agc010_a
#include <bits/stdc++.h>
using namespace std;

int  main() {
  int N;
  cin >> N;
  vector<int> data(N);
  int even = 0;
  int odd = 0;
  for (int i = 0; i < N; i++) { 
    cin >> data.at(i);
    if (data.at(i) % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  
  string ans = "NO";
  if (odd % 2 == 0) ans = "YES";  
  cout << ans << endl;
}