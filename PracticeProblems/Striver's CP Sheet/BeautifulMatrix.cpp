#include <iostream>

using namespace std;

int main(){
  
  int m = 5;
  int n = 5;
  int c, d;
  int a[m][n];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){

      cin >> a[i][j];
      if(a[i][j] == 1){
        c = i; d = j;
      }

    }
  }

  
  cout << abs(2-c) + abs(2-d);


}