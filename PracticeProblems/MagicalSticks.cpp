#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    
    if(n % 2 == 0) output += to_string(n/2) + "\n";
    else output += to_string((n+1)/2) + "\n";
  }
  
  cout << output;
}