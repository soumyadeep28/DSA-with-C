#include <iostream> 
using namespace std ;
int main () {
    cout << "this pattern is inverted triangle" ;
    cout << "Enter the number " ;
    int  n ; 
    cin >> n ; 
    int num = 1;
    for ( int i =0 ; i <n ;i++){
        for(int j =n ; j>i ; j--)
        {
            cout << " ";
           
        }
        for(int j =0 ; j<=i ; j++)
        {
            cout << "*";
           
        }
        cout << endl ;
        
    } 
    

}