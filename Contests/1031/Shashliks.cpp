#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
  
  int t;
  ll k, a, b, x, y;
  cin >> t;
  string output;

  for(int i = 0; i < t; i++){
    cin >> k >> a >> b >> x >> y;
    ll z = k;
    ll count1 = 0;
    ll count2 = 0;
    ll count = 0;
    
    while(k >= a){
      k -= x;
      count1++;
    }

    k = z;

    while(k >= b){
      k -= y;
      count2++;
    }

    k = z;

    if(count1 >= count2){
      k -= count1 * x;
    }
    else{
      k -= count2 * y;
    }

 //   cout << count1 << " " << count2 << " " << k << " ";

    if(k >= a){
      while(k >= a){
        k -= x;
        count++;
      }

      if(count1 >= count2){
        output += to_string(count1 + count) + "\n";
      }
      else{
        output += to_string(count2 + count) + "\n";
      }
    }
    else if(k >= b){
      while(k >= b){
        k -= y;
        count++;
      }

      if(count1 >= count2){
        output += to_string(count1 + count) + "\n";
      }
      else{
        output += to_string(count2 + count) + "\n";
      }    
    }

    else{
      if(count1 >= count2){
        output += to_string(count1) + "\n";
      }
      else{
        output += to_string(count2) + "\n";
      }
    }

  //  cout << count << endl;
  }
  
  cout << output;

}