#include <iostream>
using namespace std ;

int main(){
    cout << "print \n 1\n 22 \n 333\n" ; 

    int n ;
    cout << "enter the number: ";
    cin >> n ;
    int num=1 ;
    for (int i=0 ; i<n ; i++){
        for(int j =0 ; j<i+1 ; j++){
            cout << num ;
        }
        num++ ;
        cout << endl ;

    }
    return 0 ;
}