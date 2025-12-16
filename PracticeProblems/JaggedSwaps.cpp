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

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    if(a[0] != 1) output += "NO\n";
    else output += "YES\n";
  }
  
  cout << output;
}