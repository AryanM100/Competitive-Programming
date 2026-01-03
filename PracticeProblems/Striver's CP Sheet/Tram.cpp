#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int n;
  cin >> n;
  int a[n];
  int b[n];
  int count = 0;
  int max = 0;

  for(int i = 0; i < n; i++){
    cin >> a[i] >> b[i];
  }

  for(int i = 0; i < n; i++){
    count += b[i];
    count -= a[i];

    if(max < count) max = count;
  }

  cout << max;
}