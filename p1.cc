// This problem was recently asked by Google.
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
// Bonus: Can you do this in one pass?

#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool isPair(int k, std::vector<int> v){
  map<int, int> diff;
  for (size_t i = 0; i < v.size(); i++) {
    diff.insert({k-v[i],v[i]});
    if (diff.find(v[i]) != diff.end()) return true;
  }//for
  return false;
}

int main(){
  std::vector<int> v {10,15,3,7};
  int k=18;
  cout<<isPair(k,v)<<endl;

  return 0;
}
