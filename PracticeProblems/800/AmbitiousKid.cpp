#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int n;
  cin >> n;
  int a[n];
  int min = INT_MAX;

  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++){
    if(abs(a[i]) < min) min = abs(a[i]);

  }
  
  cout << min;
}