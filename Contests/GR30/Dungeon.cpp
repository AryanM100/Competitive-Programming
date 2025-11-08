#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  
  int t;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    int n, m;
    cin >> n >> m;
    int x = 0;
    int y = 0;
    int z = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int count = 0;
    int run = 2;

    int a[n];
    int b[m];
    int c[m];

    for(int j = 0; j < n; j++) cin >> a[j];
    for(int j = 0; j < m; j++) cin >> b[j];
    for(int j = 0; j < m; j++) cin >> c[j];

    while(run){
      for(int j = 0; j < n; j++){
        if(a[j] > x){
          x = a[j];
          d = j;
        }
      }
      for(int j = 0; j < m; j++){
        if(b[j] > y && b[j] <= x){
          y = b[j];
          e = j;
        }
        if(c[j] > z){
          z = c[j];
          f = j;
        }
      }
        if(z != 0){
          a[d] = max(a[d], c[f]);
          b[f] = 0;
          c[f] = 0;
          count++;
        }
        else{
          a[d] = max(a[d], c[e]);
          b[e] = 0;
          c[e] = 0;
          count++;
        }
      run--;

      cout << d << " " << e << " " << f << endl;

    cout << count << endl;
    for(int j = 0; j < n; j++) cout << a[j] << " ";
    cout << endl;
    for(int j = 0; j < m; j++){
      cout << b[j] << " ";
    }
    cout << endl;
    for(int j = 0; j < m; j++) cout << c[j] << " ";
    }
  }
  
  cout << output;
}