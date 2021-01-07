// https://atcoder.jp/contests/agc027/tasks/agc027_a
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, x;
  cin >> N >> x;
  vector<int> data(N);
  int sum = 0;
  for (int i = 0; i < N; i++) { 
    cin >> data.at(i);
    sum += data.at(i);
  }
  sort(data.begin(), data.end());

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (data[i] <= x &&
        i != N - 1 &&
        x != 0)
		{
			x -= data[i];
			ans++;
		}
	if (i == N - 1 && data[i] == x) ans++;
  }
  
  cout << ans << endl;
}