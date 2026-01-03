#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  int l, r;
  string output;

  for(int i = 0; i < t; i++){
    cin >> l >> r;

    if(2*l > r) output += "-1 -1\n";
    else output += to_string(l) + " " + to_string(2*l) + "\n";
  }
  
  cout << output;
}