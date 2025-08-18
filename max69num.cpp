#include<iostream>
using namespace std;

int max69(int num){
  string s = to_string(num);
  for(int i=0;i<s.size();i++){
    if(s[i] == '6'){
      s[i] = '9';
      break;
    }
  }
  return stoi(s);
}

int main(){
  cout << max69(9669) << endl;
  cout << max69(9996) << endl;
  cout << max69(9999) << endl;

  return 0;
}