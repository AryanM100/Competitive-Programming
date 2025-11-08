#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t;
  int n, m;
  cin >> t;
  string output;

  for(int j = 0; j < t; j++){
    cin >> n >> m;
    int a[n][m];
    int x = 0;
    int max = 0;
    int r, c;
    int c1 = 0; int c2 = 0;
    int c3 = 0; int c4 = 0;

    for(int i = 0; i < n; i++){
      for(int k = 0; k < m; k++){
        cin >> a[i][k];
      }
    }

    for(int i = 0; i < n; i++){
      for(int k = 0; k < m; k++){
        if(max < a[i][k]){
          max = a[i][k];
        }
      }
    }

    for(int i = 0; i < n; i++){
      for(int k = 0; k < m; k++){
        if(a[i][k] == max) c1++;
        if(a[k][i] == max) c3++;
      }
      if(c2 < c1) c2 = c1;
      if(c4 < c3) c4 = c3;
      c1 = 0; c3 = 0;
    }

    

    for(int i = 0; i < n; i++){
      a[i][c]--;
    }

    for(int k = 0; k < m; k++){
      a[r][k]--;
    }

    a[r][c]++;

    for(int i = 0; i < n; i++){
      for(int k = 0; k < m; k++){
        if(x < a[i][k]){
          x = a[i][k];
        }
      }
    }

    cout << endl;
    for(int i = 0; i < n; i++){
      for(int k = 0; k < m; k++){
        cout << a[i][k] << " ";
      }
      cout << endl;
    }

    cout << r << " " << c << endl;
    output += to_string(x) + "\n";
  }
  
  cout << output;
}