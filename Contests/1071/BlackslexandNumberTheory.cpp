#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int ans = 0;
    cin >> n;

    int a[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
      if(a[j] < min1) min1 = a[j];
    }

    for(int j = 0; j < n; j++){
      if(a[j] < min2 && a[j] > min1) min2 = a[j];
    }

    if((min2 - min1) < min1) ans = min1;
    else ans = min2 - min1;
    
    output += to_string(ans) + "\n";
  }
  
  cout << output;
}