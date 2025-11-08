#include <iostream>

using namespace std;

int main(){
  
  string a;
  int c;
  getline(cin, a);

  int n = (a.length() + 1)/2;
  int b[n];

  for(int i = 0; i < n; i++){

    b[i] = a[2*i] - '0';

  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(b[j] > b[j+1]){
        c = b[j];
        b[j] = b[j+1];
        b[j+1] = c;
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << b[i];
    if(i != n-1){
    cout << "+";
    }
  }

}