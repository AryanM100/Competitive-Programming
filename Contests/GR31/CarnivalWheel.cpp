#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int l, a, b;
    cin >> l >> a >> b;

    int max = INT_MIN;

    for(int j = 0; j < l; j++){
      int c = (a + j * b) % l;
      if(c > max) max = c;
    }
    output += to_string(max) + "\n";
  }
  
  cout << output;
}