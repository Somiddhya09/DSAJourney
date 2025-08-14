#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int>vec = {1,8,4,5,35,3};
  int target = 5;
  bool found = 0;
  for(int val:vec){
    if(val==target){
      found = 1;
      break;
    }
  } 
  if(found){
    cout << "found" << endl;
  }else{
    cout << "NOT found" << endl;
  }
  return 0;
}

#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vec){
  int start=0,back=vec.size()-1;
  for(int val:vec){
    while(start < back){
      swap(vec[start],vec[back]);
      start++;
      back--;
    }
  }
}
int main(){
  vector<int> vec = {1,2,3,4,5,6};
  reverse(vec);
  for(int val:vec){
    cout << val << " ";
  }
  return 0;
}