// https://atcoder.jp/contests/abc068/tasks/abc068_b
#include<bits/stdc++.h>
using namespace std;

int check(int number) {
  int count = 0;
  while(number % 2 == 0) {
    number = number / 2;
    count++;
  }
  return count;
}

int main () {
  int N;
  cin >> N;
  
  int max = 0;
  int result = 0;
  for (int i = 1; i <= N; i++) {
    int count = check(i);
    if (max < count) { 
      max = count;
      result = i;
    }
  }
  
  if (N == 1) result = 1;
  
  cout << result << endl;
}