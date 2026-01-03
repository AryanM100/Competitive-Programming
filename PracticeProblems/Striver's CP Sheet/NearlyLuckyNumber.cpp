#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  ll n;
  int a;
  int count = 0;
  ll t;
  cin >> n;

  t = n;

  while(n > 0){
    a = n % 10;

    if(a == 7 || a==4) count++;

    n = n/10;
  }

  if(count == 4 || count == 7) cout << "YES";
  else cout << "NO";
}