#include <iostream>
using namespace std;

void min(int a, int b){
    if(a>b){
        cout << "min: " << b;
    }else{
        cout << "min: " << a;
    }
}

int sum1ton(int n){
    int sum = 0;
    for (int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int factorial(int n){
    int fact = 1;
    if(n == 0){
        return 1;
    }else{
        for(int i=1;i<=n;i++){
            fact *= i;
        }
        return fact;
    }
}

void sumOfDigits(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        n = n/10;
        sum += digit;
    }
    cout << sum << endl;
}

int nCr (int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int primeYN(int n){
    int flag = 0;
    for(int i=2;i<=n;i++){
        if(n%i == 0){
            flag ++;
        }
    }
    if(flag == 1){
        return 1;
    }else{
       return 0;
    }
}

void printAllPrime(int n){
    for(int i=1;i<=n;i++){
        if(primeYN(i)){
            cout << i << endl;
        }
    } 
}

void fibonacci(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        cout << a << " ";
        c = a+b;
        a = b;
        b = c;
    }
}

int main(){

    //min(5,4);
    //int result = sum1ton(5);
    //int result = factorial(5);
    //cout << result << endl; 

    //sumOfDigits(145);

    // int eightCtwo = nCr(8,2);
    // cout << eightCtwo << endl;

    // int result = primeYN(8);
    // cout  << result << endl;

    //printAllPrime(10);
    fibonacci(5);
    
    return 0;
}
