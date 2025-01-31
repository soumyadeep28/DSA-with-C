#include <iostream> 
using namespace std ;

int main () {
    cout << "this pattern is like \n 1 \n 12 \n 123 \n" ;
    cout << "Enter the number " ;
    int  n ; 
    cin >> n ; 

    for ( int i =0 ; i <n ;i++){
        for(int j =0 ; j< i+1 ; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl ;
    } 
    

}