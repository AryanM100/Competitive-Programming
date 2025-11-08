#include <iostream>

using namespace std;

int main(){
  
  int t;
  int b;
  int n;
  cin >> t;
  string s;

  for(int i = 0; i < t; i++){
    cin >> n;
    int a[n];

    for(int j = 0; j < n; j++){
      a[j] = j+1;
    }
    
    for(int j = 1; j < n - 1; j++){
          if(a[j] < a[j+1]){
            b = a[j];
            a[j] = a[j+1];
            a[j+1] = b;
          }
        }

    for(int j = 0; j < n; j++){
      if(j == n - 1){
        s += to_string(a[j])+"\n";
      }
      else{
        s += to_string(a[j])+" ";
      }
    }
  }
  
  cout << s;
}