// This problem was asked by Microsoft.
// A number is considered perfect if its digits sum up to exactly 10.
// Given a positive integer n, return the n-th perfect number.
// For example, given 1, you should return 19. Given 2, you should return 28.

#include <iostream>
#include <string>

using namespace std;

int main(){

  int n=36;
  string s=to_string(n);
  int ans=0;
  for (size_t i = 0; i < s.length(); i++) {
    ans+=s[i]-'0';
  }
  cout<<s+to_string(10-ans)<<endl;

  return 0;
}
