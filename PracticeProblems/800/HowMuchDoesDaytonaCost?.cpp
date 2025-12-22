#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  bool exist = true;
  string output;

  for(int i = 0; i < t; i++){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    if(count(a, a+n, k) >= 1) output += "YES\n";
    else output += "NO\n";
  }
  
  cout << output;
}