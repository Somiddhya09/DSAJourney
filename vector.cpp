#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector <int> vec;
  vector<int> vec={1,2,3,4,5};
  vector<char> vec = {'a','b','c','d','e'};

  cout << "size : " << vec.size() << endl;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  cout << "after push back size : " << vec.size() << endl;

  vec.pop_back();

  cout << "front val:" << vec.front() << endl;

  cout << "back val:" <<  vec.back() << endl;

  cout << vec.size() << endl;
  cout << vec.capacity() << endl;

  for(char i: vec){ //--> i is the value at the index and not the index
    cout << i << endl;
  }
  return 0;
}