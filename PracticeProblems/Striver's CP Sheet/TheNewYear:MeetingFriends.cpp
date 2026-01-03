#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int a, b, c;
  int x;

  cin >> a >> b >> c;

  if(a > b && a > c){
    if(b > c) x = b;
    else x = c;
  }
  else if(b > a && b > c){
    if(a > c) x = a;
    else x = c;
  }
  else{
    if(a > b) x = a;
    else x = b;
  }

  cout << abs(a - x) + abs(b - x) + abs(c - x);
  
}