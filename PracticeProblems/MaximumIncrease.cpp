#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int n;
  cin >> n;
  int count = 1;
  int c = 1;
  ll a[n];

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int j = 0; j < n - 1; j++){
    if(a[j+1] > a[j]) count++;
    else{
      count = 1;
    }

    if(c < count) c = count;
  }

  cout << c;
}