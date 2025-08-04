#include <iostream>
using namespace std;

int main(){

    //!PATTERNS

    //*   1234 
    //*   1234
    //*   1234
    //*   1234

    //^ int rows = 4, cols = 4;
    //^ for(int i=1;i<=rows;i++){
    //^     for(int j=1;j<=cols;j++){
    //^         cout << j << " ";
    //^     }
    //^     cout << " " <<  endl;
    //^ }
        

    // * * * * 
    // * * * *
    // * * * *
    // * * * *

    //^ int n=4;
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=1;j<=n;j++){
    //^         cout << "* ";
    //^     }
    //^     cout << endl;
    //^ }

    //* A B C D E F G H I 
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I
    //* A B C D E F G H I

    //^ int n=9;
    //^ for(int i=0;i<n;i++){
    //^     char ch = 'A';
    //^     for(int j=0;j<n;j++){
    //^         cout << ch << " ";
    //^         ch ++;
    //^     }
    //^     cout << endl;
    //^ }


    //* 1 2 3 
    //* 4 5 6
    //* 7 8 9

    //^ int n=3, num=1;
    //^ for(int i=0;i<n;i++){
    //^     for(int j=0;j<n;j++){
    //^         cout << num << " ";
    //^         num++;
    //^     }
    //^     cout << endl;
    //^ }


    //* Enter n: 4
    //* A B C D 
    //* E F G H
    //* I J K L
    //* M N O P 
    
    //^ int n;
    //^ char ch = 'A';
    //^ cout << "Enter n: ";
    //^ cin >> n;
    //^ for(int i=0;i<n;i++){
    //^     for(int j=0;j<n;j++){
    //^         cout << ch << " ";
    //^         ch ++;
    //^     }
    //^     cout << endl;
    //^ }

    // * 
    // * *
    // * * *
    // * * * *

    //^ int n=4;
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=0;j<i;j++){
    //^         cout << "* ";
    //^     }
    //^     cout << endl;
    //^ }
    
    //* 1 
    //* 2 2
    //* 3 3 3
    //* 4 4 4 4

    //^ int n=4, num=1;
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=1;j<=i;j++){
    //^         cout << num << " ";
    //^     }
    //^     num++;
    //^     cout << endl;
    //^ }

    // A 
    // B B
    // C C C
    // D D D D
    // E E E E E
    // F F F F F F
    // G G G G G G G
    // H H H H H H H H
    // I I I I I I I I I
    // J J J J J J J J J J
    // K K K K K K K K K K K
    // L L L L L L L L L L L L
    // M M M M M M M M M M M M M
    // N N N N N N N N N N N N N N
    // O O O O O O O O O O O O O O O
    // P P P P P P P P P P P P P P P P
    // Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
    // R R R R R R R R R R R R R R R R R R
    // S S S S S S S S S S S S S S S S S S S
    // T T T T T T T T T T T T T T T T T T T T
    // U U U U U U U U U U U U U U U U U U U U U
    // V V V V V V V V V V V V V V V V V V V V V V
    // W W W W W W W W W W W W W W W W W W W W W W W
    // X X X X X X X X X X X X X X X X X X X X X X X X
    // Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y
    // Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z

    //^ int n=26;
    //^ char ch= 'A';
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=1;j<=i;j++){
    //^         cout << ch << " ";
    //^     }
    //^     ch ++;
    //^     cout << endl;
    //^ }

    //* 1 
    //* 1 2
    //* 1 2 3
    //* 1 2 3 4

    //^ int n=4;
    //^ for (int i=1;i<=n;i++){
    //^     for(int j=1;j<=i;j++){
    //^         cout << j << " ";
    //^     }
    //^     cout << endl;
    //^ }
    
    //* 1 
    //* 2 1
    //* 3 2 1
    //* 4 3 2 1

    //^ int n=4;
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=i;j>=1;j--){
    //^         cout << j << " ";
    //^     }
    //^     cout << endl;
    //^ }

    //* 1        
    //* 2 3      
    //* 4 5 6    
    //* 7 8 9 10

    //^ int n=4, num=1;
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=1;j<=i;j++){
    //^         cout << num << " ";
    //^         num++;
    //^     }
    //^     cout << endl;
    //^ }

    //* A 
    //* B C
    //* D E F
    //* G H I J

    //^ int n=4;
    //^ char ch = 'A';
    //^ for(int i=1;i<=n;i++){
    //^     for(int j=1;j<=i;j++){
    //^         cout << ch << " ";
    //^         ch ++;
    //^     }
    //^     cout << endl;
    //^ }

    //* 1111
    //*  222
    //*   33
    //*    4

    //^ int n=4, num=1;
    //^ for(int i=0;i<n;i++){
    //^     for(int j=0;j<i;j++){
    //^         cout << " ";
    //^     }
    //^     for(int j=0;j<n-i;j++){
    //^         cout << num;
    //^     }
    //^     num++;
    //^     cout << endl;
    //^ }
     
    //*    1
    //*   121
    //*  12321
    //* 1234321

    //^ int n=4;
    //^ for(int i=0;i<n;i++){
    //^     for(int j=0;j<n-i-1;j++){
    //^         cout << " ";
    //^     }
    //^     for(int j=1;j<=i+1;j++){
    //^         cout << j;
    //^     }
    //^     for(int j=i;j>=1;j--){
    //^         cout << j;
    //^     }
    //^     cout <<  endl;
    //^ }

     
//    *  
//   * *  
//  *   * 
// *     *
//  *   * 
//   * *  
//    *  


    //^ int n=4;

    // //top
    //^ for(int i=0;i<n;i++){
    //     //spaces
    //^     for(int j=0;j<n-i-1;j++){
    //^         cout << " ";
    //^     }
    //     //stars
    //^     cout << "*";

    //^     if(i!=0){
    //         //spaces
    // ^        for(int j=0;j<(2*i-1);j++){
    //^             cout << " ";
    //^         }
    //         //stars
    // ^        cout << "*";
    // ^    }
    //^     cout <<  endl;
    //^ }

    // //bottom
    //^ for(int i=0;i<n-1;i++){
    //     //spaces
    //^     for(int j=0;j<i+1;j++){
    //^         cout << " ";
    //^     }

    //^     cout << "*";

    //^     if(i != n-2){
    //         //spaces
    //^         for(int j=0;j<2*(n-i)-5;j++){
    //^             cout << " ";
    //^         }
    //^         cout << "*";
    //^     }
    //^     cout << endl;
    //^ }

    return 0;
}