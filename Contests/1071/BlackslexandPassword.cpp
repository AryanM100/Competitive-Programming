#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int k, x;
    cin >> k >> x;

    output += to_string(k * x + 1) + "\n";
  }
  
  cout << output;
}