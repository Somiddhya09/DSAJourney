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
// #include<iostream>
// using namespace std;
// int main(){
//   int arr[] = {1,2,3,4,7,8,9,10};
//   int n = sizeof(arr)/ sizeof(arr[0]);
//   int minIdx=0,maxIdx=0;
//   for(int i=0;i<n;i++){
//     if(arr[i] < arr[minIdx]) minIdx = i;
//     if(arr[i] >  arr[maxIdx]) maxIdx = i;
//   }
//   swap(arr[minIdx], arr[maxIdx]);
//   for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

//WAP TP PRINT ALL THE UNIQUE VALUES IN AN ARRAY
// #include <iostream>
// using namespace std;
// int main(){
//   int arr[] = {1,2,3,4,5,3,2,4,3,3,2,4,3,4};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   cout << "Unique elements : " ;
//   for(int i=0;i<n;i++){
//     int count = 0;
//     for(int j=0;j<n;j++){
//       if(arr[i] == arr[j]){
//         count++;
//       }
//     }
//     if(count == 1){
//       cout << arr[i] << " ";
//     }
//   }
//   return 0;
// }

//WAP TO PRINT INTERSECTION OF 2 ARRAYS
#include<iostream>
using namespace std;
int main(){
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {3,4,5,6,7};

  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j]){
        cout << arr1[i] << " ";
        break;
      }
    }
  }
  return 0;
}