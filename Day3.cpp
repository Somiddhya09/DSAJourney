#include<iostream>
using namespace std;

int main(){
    //* char ch;
    //* cout << "Enter a character: ";
    //* cin >> ch;
    //* if (ch >= 'a' && ch <= 'z'){
    //*     cout << "Lowercase" << endl;
    //* }else if(ch >= 'A' && ch <= 'Z'){
    //*     cout << "Uppercase" << endl;
    //* }else{
    //*     cout << "Invalid input" << endl;
    //* }

    //^ for (int i=1;i<=5;i++){
    //^     cout << i << endl;
    //^ }

    //& int n=1;
    //& while(n<=5){
    //&     cout << n << endl;
    //&     n++;
    //& }

    //~ int n, sum = 0;
    //~ cout << "Enter n: ";
    //~ cin >> n;
    //~ for(int i=1;i<=n;i++){
    //~     sum += i;
    //~ }
    //~ cout << sum << endl;

    //? int n, sum=0;
    //? cout << "Enter n: ";
    //? cin >> n;
    //? for(int i=1;i<=n;i++){
    //?     if(i%2 != 0){
    //?         sum += i;
    //?     }
    //? }
    //? cout << sum << endl;

    //^ int n=10, i=1;
    //^ do{
    //^     cout << i << endl;
    //^     i++;
    //^ }while( i <= n);
    
    //* int n, flag=0;
    //* cout << "Enter n: ";
    //* cin >> n;
    //? for(int i=2;i<=n-1;i++){
    //* for(int i=2;i*i <= n;i++){
    //*     if(n%i == 0){
    //*         flag++;
    //*     }
    //* }
    //* if(flag == 1){
    //*     cout << "No. is prime";
    //* }else{
    //*     cout << "No. is composite";
    //* }

    //& int n,sum=0;
    //& cout << "Enter n: ";
    //& cin >> n;
    //& for(int i=1;i<=n;i++){
    //&     if(i%3 == 0){
    //&         sum += i;
    //&     }
    //& }
    //& cout << sum << endl;

    int n, fact = 1;
    cout << "Enter n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact *= i; 
    }
    cout << fact << endl;

    return 0;
}