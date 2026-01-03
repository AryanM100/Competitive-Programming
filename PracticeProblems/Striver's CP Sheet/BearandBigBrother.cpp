#include <iostream>

using namespace std;

int main(){
  
  int a, b;
  int count = 0;

  cin >> a >> b;

  while(b > a){
    a = a * 3;
    b = b * 2;
    count++;
  }
  
  if(a == b){
    count++;
  }

  cout << count;

}