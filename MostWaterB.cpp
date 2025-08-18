#include<iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height){
  int mostWater = 0;
  int n = height.size();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int w = j-i;
      int ht = min(height[i], height[j]);
      int area = w*ht;

      mostWater = max(mostWater, area);
    }
  }
  return mostWater;
}

int main(){
  vector<int> height = {1,8,6,2,5,4,8,3,7};

  int ans = maxArea(height);
  cout << ans << endl;

  return 0;
}