#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int dp[1002][1002];

int main() {
  string s1, s2;
  cin >> s1;
  cin >> s2;
  s1 = '0' +s1;
  s2 = '0' + s2;

  for(int i =0; i< s1.length(); i++ ){

    for(int j =0; j< s2. length() ; j++){
      if(i==0 || j == 0){
        dp[i][j] = 0;
        continue;
      }
      if(s1[i] == s2[j]){
        dp[i][j] = dp[i-1][j-1] +1;
      }

      else{
        if(dp[i-1][j] > dp[i][j-1]){
          dp[i][j] = dp[i-1][j];
        }
        else{
          dp[i][j] = dp[i][j-1];
        }
      }
    }

  }

 
  cout << dp[s1.length()-1][s2.length()-1];
  return 0;

} 