#include <iostream>

using namespace std;

int main(){
  
  int t;
  cin >> t;
  
  int n, x;
  int b;
  int count = 0;
  string c[t];

  for(int i = 0; i < t; i++){
    cin >> n >> x;
    int a[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
    }

    for(int k = 0; k < n; k++){
      if(a[k] == 1){
        b = k;
        break;
      }
    }

    if(b + x >= n){
      c[i] = "yes";
      continue;
    }

    for(int k = b+x; k < n; k++){
      if(a[k] == 1){
        count = 1;
      }
    }
    if(count == 1){
      c[i] = "no";
    }
    else{
      c[i] = "yes";
    }
    count = 0;
  }

  for(int i = 0; i < t; i++){
    cout << c[i] << endl;
  }

}