// This problem was asked by Facebook.
// Given a list of integers, return the largest product that can be made by multiplying any three integers.
// For example, if the list is [-10, -10, 5, 2], we should return 500, since that's -10 * -10 * 5.
// You can assume the list has at least three integers.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  std::vector<int> v{-10,-10,5,2};
  sort(v.begin(), v.end());
  int max=v[v.size()-1];
  if (v[0]*v[1]>v[v.size()-3]*v[v.size()-2]) {
    max*=v[0]*v[1];
  }
  else max*=v[v.size()-3]*v[v.size()-2];
  cout<<max<<endl;
  return 0;
}
