#include <iostream> 
using namespace std ;
int main () {
    cout << "this pattern is 1 \n 121 \n 12321 triangle" ;
    cout << "Enter the number " ;
    int  n ; 
    cin >> n ; 
    int num = 1;
    for ( int i =0 ; i <n ;i++){
        for (int j =0 ; j<n-i-1 ; j++)
        {
            cout << " ";
        }
        for (int j =1 ; j<=i+1 ; j++)
        {
            cout << j ;
        }
        for (int j =i ; j>0 ; j--)
        {
            cout << j ;
        }


        cout << endl ;
        
    } 
    

}