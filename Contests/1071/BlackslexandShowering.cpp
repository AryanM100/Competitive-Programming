#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n;
    int sum = 0;
    int l = 0;
    int m = INT_MAX;
    cin >> n;

    int a[n];
    for(int j = 0; j < n; j++) cin >> a[j];

    for(int j = 0; j < n - 1; j++){
      sum += abs(a[j] - a[j+1]);
    }

    for(int j = 0; j < n; j++){
      if(j == 0){
        l = sum - abs(a[j] - a[j+1]);
      }
      else if(j == n - 1){
        l = sum - abs(a[j] - a[j-1]);
      }
      else{
        l = sum - abs(a[j] - a[j-1]) - abs(a[j] - a[j+1]) + abs(a[j-1] - a[j+1]);
      }

      m = min(l, m);
    }

    output += to_string(m) + "\n";
  }
  
  cout << output;
}