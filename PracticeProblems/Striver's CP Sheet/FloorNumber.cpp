#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;
  int n, x;

  for(int i = 0; i < t; i++){
    cin >> n >> x;

    float a = (float)(n - 2) / x;
    int b = ceil(a);
    if(b == -1) output += "1\n";
    else output += to_string(b + 1) + "\n";
  }
  
  cout << output;
}