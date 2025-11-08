#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;
  int x, y, z;

  for(int i = 0; i < t; i++){
    cin >> x >> y >> z;

    int a, b, c = 0;

    if(x != y && y != z && x != z) output += "NO\n";
    else if(x == y && y == z && x == z){
      output += "YES\n";
      output += to_string(x) + " " + to_string(x) + " " + to_string(x) + "\n";
    }
    else{
      int d = max({z, y, x});
      int count = 0;
      if(x == d) count++;
      if(y == d) count++;
      if(z == d) count++;

      if(count != 2) output += "NO\n";
      else{
        output += "YES\n";
        if(x < d) output += to_string(y) + " " + to_string(x) + " " + to_string(x) + "\n";
        else if(y < d) output += to_string(x) + " " + to_string(y) + " " + to_string(y) + "\n";
        else output += to_string(y) + " " + to_string(z) + " " + to_string(z) + "\n";
      }
    }
  }
  
  cout << output;
}