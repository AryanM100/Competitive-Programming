#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    ll a, b, c, n = 0;
    cin >> a >> b >> c >> n;

    ll B = (a - 2*b + c + n);
    float C = (float)B / 3 + b - c;
    float A = (float)(n - 2*B/3 - b + c); 

    // cout << B << " " << C << "\n";
    if(B < 0 || C < 0 || A < 0 || B % 3 != 0) output += "NO\n";
    else output += "YES\n";
  }
  
  cout << output;
}