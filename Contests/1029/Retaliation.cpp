#include <iostream>

using namespace std;

int main(){
  
  int t;
  int n;
  cin >> t;
  string c;

  for(int i = 0; i < t; i++){
    cin >> n;
    int a[n];

    for(int j = 0; j < n; j++){
      cin >> a[j];
    }

    for(int j = 0; j < n; j++){
      for(int k = 0; k < n; k++){
        if(a[k] % k+1 == 0){

        }
      }
    }
    
  }
  
}