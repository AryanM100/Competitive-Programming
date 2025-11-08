#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int x, y, n;
    cin >> x >> y >> n;

    int a = n % x;

    if(y > a){
      int b = x - y + a;
      int l = n - b;
      output += to_string(l) + "\n";
    }
    else{
      int b = a - y;
      int l = n - b;
      output += to_string(l) + "\n";
    }
  }
  cout << output;
}