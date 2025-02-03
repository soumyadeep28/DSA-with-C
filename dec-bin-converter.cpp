#include<iostream>
using namespace std ; 

int decimal_to_bin(int n){
    int rem , val=0 , pow=1; 
    while(n){
        rem = n%2 ;
        val = rem *pow + val ; 
        n = n/2;
        pow *= 10 ;
    }
    return val;
}

int bin_to_decimanl(int n ){
    int val =0 , rem ,pow = 1 ; 
    while(n){
        rem = n%10 ; 
        val = val + rem * pow ; 
        n=n/10;
        pow *=2 ; 
    }
    return val;
}
int main() {
    cout << " enter the choice \n 1. to convert to decimal to binary :\n 2. To convert to binary to deciamal :\n" ;
    int choice ,n;
    cin >> choice ; 
    cout << "enter the digit: " ; 
    cin >> n ; 
    if (choice == 1 ){
        cout << decimal_to_bin(n) ; 
    }else if (choice == 2)
    {
        cout << bin_to_decimanl(n);
    }
    return 0;
}