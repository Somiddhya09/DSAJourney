#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
  for(int i=0;i<n;i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}

void reverseArray(int arr[], int n){
  int start = 0, end=n-1;
  while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main(){

  int arr[] = {1,8,3,7,5,4};
  int n=6;
  int target = 8;

  cout << linearSearch(arr,n,target) << endl;
  reverseArray(arr, n);

  for(int i=0;i<n;i++){
    cout << arr[i] << endl;
  }

  //^ int arr[5] = {3, 78,5,87,9};
  //^ int smallest = INT32_MAX;
  //^ int largest = INT32_MIN;
  //^ for(int i=0;i<5;i++){
  //^   if(arr[i] < smallest){
  //^     smallest = arr[i];
  //^   }

  //^   if(arr[i] > largest){
  //^     largest = arr[i];
  //^   }
  //^ }

  //^ for(int i=0;i<5;i++){
  //^   smallest= min(arr[i], smallest);
  //^   largest = max(arr[i],largest);
  //^ }
  //^ cout << largest << endl;
  
  
  return 0;
}