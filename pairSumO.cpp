#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target){
  vector<int> ans;
  int n=vec.size();
  int i=0,j=n-1;
  while (i<j){
    int pairSum=vec[i]+vec[j];
    if(pairSum > target){
      j--;
    }else if (pairSum < target){
      i++;
    }else{
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
    
  }
  return ans;
}

int main(){
  vector<int> vec={1,2,3,4,6,7,9};
  int target = 9;
  
  vector<int> ans = pairSum(vec, target);
    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
  
  return 0;
}