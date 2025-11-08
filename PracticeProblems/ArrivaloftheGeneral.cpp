#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int n;
  cin >> n;
  int a[n];
  int min, max;
  int x, y;

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  min = a[0];
  max = 0;

  for(int i = 0; i < n; i++){
    if(min >= a[i]){
      min = a[i];
      x = i;
    }
    if(max < a[i]){
      max = a[i];
      y = i;
    }
  }

  if(y > x) cout << (y) + (n - 1 - x) - 1;
  else cout << (y) + (n - 1 - x);
}