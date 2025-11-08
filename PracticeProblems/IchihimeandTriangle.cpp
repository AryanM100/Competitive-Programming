#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  ll a, b, c, d;
  string output;

  for(int i = 0; i < t; i++){
    cin >> a >> b >> c >> d;

    output += to_string(b) + " " + to_string(c) + " " + to_string(c) + "\n";
  }
  
  cout << output;
}