#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  ll n;
  int k;
  cin >> n >> k;

  int a;

  for(int i = 0; i < k; i++){
    a = n % 10;

    if(a == 0) n = n / 10;
    else n--;
  }

  cout << n;
}