#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, x;
    int m = INT_MIN;
    int d = 0;
    int e = 0;
    cin >> n >> x;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    d = a[0];
    e = 2*(x - a[n-1]);

    for(int j = 0; j < n - 1; j++){
      m = max(m, a[j+1] - a[j]);
    }

    if(n == 1){
      m = max(m, a[0]);
    }

    m = max({m, e, d});

    output += to_string(m) + "\n";
  }
  
  cout << output;
}