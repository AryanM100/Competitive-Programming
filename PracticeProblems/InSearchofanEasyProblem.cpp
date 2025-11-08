#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int n;
  cin >> n;
  int a[n];
  bool done = false;

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = 0; i < n; i++){
    if(a[i] == 1){
      cout << "HARD";
      done = true;
      break;
    }
  }

  if(done == false) cout << "EASY";
}