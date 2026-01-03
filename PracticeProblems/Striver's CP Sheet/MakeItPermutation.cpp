#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  int n;
  cin >> t;
  string output;
  
  for(int i = 0; i < t; i++){
    cin >> n;

    output += to_string(2*n - 1) + "\n";

    for(int j = 1; j < n; j++){
      output += to_string(j) + " 1 " + to_string(j) + "\n";
      output += to_string(j) + " " + to_string(j+1) + " " + to_string(n) + "\n";
    }
    output += to_string(n) + " 1 " + to_string(n) + "\n";
  }

  cout << output;
}