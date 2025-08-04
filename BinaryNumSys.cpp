#include <iostream>
using namespace std;

void decToBinary(int decNum){
    int ans = 0, pow = 1 ; //10^0
    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;
        ans += rem*pow;
        pow = pow*10;
    }
    cout << ans << endl;
}

void binToDecimal(int BinNum){
    int ans = 0, pow =1; //2^0
    while(BinNum > 0){
        int rem = BinNum%10;
        BinNum /= 10;
        ans += rem*pow;
        pow *= 2;
    }
    cout <<  ans << endl;
}

int main(){

    // for(int i=1;i<=10;i++){
    //     decToBinary(i);
    // }
    
    binToDecimal(101);

    return 0;
}