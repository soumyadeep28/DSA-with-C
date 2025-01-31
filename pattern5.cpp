#include <iostream> 
using namespace std ;
int main () {
    cout << "this pattern is like \n 1 \n 21 \n 321 \n" ;
    cout << "Enter the number " ;
    int  n ; 
    cin >> n ; 

    for ( int i =0 ; i <n ;i++){
        for(int j =i+1 ; j>0 ; j--)
        {
            cout << j << " ";
        }
        cout << endl ;
    } 
    

}