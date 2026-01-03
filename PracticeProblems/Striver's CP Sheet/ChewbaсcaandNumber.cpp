#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  
  ll x;
  int a;
  ll t = 0;
  ll i = 1;
  cin >> x;
  ll s = x;

  int n;

  n = to_string(x).length();

  while(n > 0){
    a = x % 10;

    if(n == 1 && a == 9){
      t += i*a;
    }
    else{
      if(9 - a < a){
        t += i*(9 - a);
      }
      else{
        t += i*a;
      }
    }

    i *= 10;
    x = x / 10;
    n--;    
  }
  
  if(t == 0){
    cout << s;
  }
  else{
  cout << t;
  }
}