#include <iostream>

using namespace std;

int main(){
  
  int x;
  int a, b;
  cin >> x;
  
  a = x % 5;
  b = x / 5;

  if(a == 0){
    cout << b;
  }
  else{
    cout << b+1;
  }
  
}