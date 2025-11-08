#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, m;
    cin >> n >> m;

    if(n == 1) output += "0\n";
    else if(n > 2) output += to_string(m * 2) + "\n";
    else output += to_string(m) + "\n";
  }
  
  cout << output;
}