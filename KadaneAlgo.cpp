#include<iostream>
using namespace std;
int main(){
   int n=6;
   int arr[n] = {1,-3,2,5,6,-9};
   int currSum=0, maxSum=INT32_MIN;
   for (int i=0;i<n;i++){
      currSum += arr[i];
      maxSum = max(maxSum, currSum);
      if(currSum < 0){
         currSum = 0;
      }
   }
   cout << maxSum << endl;
   return 0;
}