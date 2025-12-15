#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int a, b;
    int count = 0;
    cin >> a >> b;

    int c = abs(a - b);

    for(int j = 10; j >= 1; j--){
      count += c / j;
      c = c % j;
    }

    output += to_string(count) + "\n";
  }
  
  cout << output;
}