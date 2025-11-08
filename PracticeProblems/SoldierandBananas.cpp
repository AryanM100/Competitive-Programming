#include <iostream>

using namespace std;

int main(){
  
  int k, n, w;

  cin >> k >> n >> w;

  int a = 0;

  for(int i = 1; i <= w; i++){
    a += i * k;
  }

  int b = a - n;

  if(b < 0){
    cout << 0;
  }
  else{
    cout << b;
  }
  
}