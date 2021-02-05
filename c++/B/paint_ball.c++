// https://atcoder.jp/contests/abc046/tasks/abc046_b
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  
  // K * K - 1 * K - 1 * ... (N回) 
  long long ans = K;
  for (int i = 1; i < N; i++) {
    ans *= (K - 1);
  }
  cout << ans << endl;
}