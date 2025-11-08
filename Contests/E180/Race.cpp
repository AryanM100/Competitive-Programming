#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  int a, x, y;
  string output;

  for(int i = 0; i < t; i++){
    cin >> a >> x >> y;
  
    if(a < x && a < y) output += "yes\n";
    else if(a > x && a > y) output += "yes\n";
    else output += "no\n";
  }
  
  cout << output;
}