#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int a, b;
    cin >> a >> b;

    int c = 2 * a - b;
    int d = 2 * b - a;

    if(c < d && c >= 0){
      int e = b + c;
      e = e*e;
      output += to_string(e) + "\n";
    }
    else if(c >= d && d >= 0){
      int f = a + d;
      f = f*f;
      output += to_string(f) + "\n";
    }
    else if(c < d && c < 0){
      int g = 2*a + abs(c);
      g = g*g;
      output += to_string(g) + "\n";
    }
    else if(c >= d && d < 0){
      int h = 2*b + abs(d);
      h = h*h;
      output += to_string(h) + "\n";
    }
  }
  
  cout << output;
}