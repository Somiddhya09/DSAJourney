//WAP TP CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//   int arr[] = {1,2,3,4,7,8,9,10};
//   int n=sizeof(arr)/ sizeof(arr[0]),sum=0,pdt=1;
//   for(int i=1;i<=n;i++){
//     sum += arr[i];
//     pdt *= arr[i];
//   }
//   cout << sum << endl;
//   cout << pdt << endl;
//   return 0;
// }


//WAP TO SWAP THE MAX AND MIN NUMBERS IN AN ARRAY
#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,7,8,9,10};
  int n = sizeof(arr)/ sizeof(arr[0]);
  int minIdx=0,maxIdx=0;
  for(int i=0;i<n;i++){
    if(arr[i] < arr[minIdx]) minIdx = i;
    if(arr[i] >  arr[maxIdx]) maxIdx = i;
  }
  swap(arr[minIdx], arr[maxIdx]);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}