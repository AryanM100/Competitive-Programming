#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, x;
    int c = 0;
    int d = 0;
    cin >> n;

    int a[n];

    for(int j = 0; j < n; j++) cin >> a[j];

    cin >> x;

    for(int j = 0; j < n; j++){
      if(a[j] >= x) d++;
      if(a[j] <= x) c++;
    }

    if(c >= 1 && d >= 1) output += "YES\n";
    else output += "NO\n";
  }
  
  cout << output;
}