#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, l, k, c, d, p;
  int n_l, n_p;

  cin >> n >> l >> k >> c >> d >> p >> n_l >> n_p;

  int a = (k * l) / n_l;

  int b = c * d;

  int x = p / n_p;

  int y = min({a, b, x}) / n;
  
  cout << y;
  
}