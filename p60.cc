// This problem was asked by Facebook.
// Given a multiset of integers, return whether it can be partitioned into two subsets whose sums are the same.
// For example, given the multiset {15, 5, 20, 10, 35, 15, 10}, it would return true, since we can split it up
//into {15, 5, 10, 15, 10} and {20, 35}, which both add up to 55.
// Given the multiset {15, 5, 20, 10, 35}, it would return false, since we can't split it up into two subsets that add up to the same sum.
#include <vector>
#include <iostream>

using namespace std;

bool canPartition(std::vector<int> v){
  int sum=0;
  for (size_t i = 0; i < v.size(); i++) {
    sum+=v[i];
  }
  if (sum%2==0) return true;

  return false;
}

int main(){
  std::vector<int> v{15, 5, 20, 10, 35, 15, 10};
  bool flag=canPartition(v);
  if (flag) {
    cout<<"Can be partioned"<<endl;
  }
  else   cout<<"Can't be partioned"<<endl;

  std::vector<int> g{15, 5, 20, 10, 35};
  flag=canPartition(g);
  if (flag) {
    cout<<"Can be partioned"<<endl;
  }
  else   cout<<"Can't be partioned"<<endl;


  return 0;
}
