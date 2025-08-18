#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MJbrute(vector<int> vec){
  int n=vec.size();

  for(int val: vec){
    int freq=0;

    for(int el: vec){
      if (el == val){
        freq ++;
      }
    }
    if(freq > n/2){
      cout << val;
      return;
    }
  }
  cout << "none";
}

void MJop(vector<int> vec){
  int n = vec.size();
  //sort
  sort(vec.begin(), vec.end());
  
  //freq count
  int freq=1, ans = vec[0];
  for(int i=1;i<n;i++){
    if(vec[i]==vec[i-1]){
      freq++;
    }else{
      freq = 1;
      ans = vec[i];
    }

    if(freq > n/2){
      cout << ans;
      return;
    }
  }
  cout << "none" << endl;
}

int main(){
  vector<int> vec={1,2,2,1,1};
  
  //MJbrute(vec);
  MJop(vec);
  return 0;
}