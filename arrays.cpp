#include <iostream>
using namespace std;

int main(){
  //^ int size=5;
  //^ int marks[size];

  //^ for(int i=0;i<size;i++){
  //^   cin >> marks[i];
  //^ }

  //^ for(int i=0;i<size;i++){
  //^   cout << marks[i] << endl;
  //^ }

  //SMALLEST & LARGEST
  int size = 5;
  int arr[size] = {1,2,3,4,5};
  int index;

  int smallest = INT32_MAX;
  int largest = INT32_MIN;

  for(int i=0;i<size;i++){
    if(arr[i] < smallest){
      smallest = arr[i];
      if(smallest == arr[i]){
        index = i;
      }
    }

    // smallest = min(arr[i], smallest); 
    largest = max(arr[i], largest);
  }

  cout << "Index of smallest number is : " << index <<endl;

  cout << "smallest = " << smallest << endl;
  cout << "largest = " << largest << endl;
}