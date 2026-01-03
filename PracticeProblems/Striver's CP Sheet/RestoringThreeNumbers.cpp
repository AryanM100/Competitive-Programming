#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int x, y, z, w;
  int t, a, b, c;
  cin >> x >> y >> z >> w;

  t = max({x, y, z, w});

  if(t == x){
    a = t - z;
    b = t - y;
    c = t - w;
  }
  else if(t == y){
    a = t - z;
    b = t - x;
    c = t - w;
  }
  else if(t == z){
    a = t - x;
    b = t - y;
    c = t - w;
  }
  else{
    a = t - z;
    b = t - y;
    c = t - x;
  }

  cout << a << " " << b << " " << c;
}