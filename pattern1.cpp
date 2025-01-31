#include <iostream>
using namespace std ;

int main(){
    cout << "enter the pattern in a format of 123\n123\n123" << endl ;

    cout << "enter the number " ;
    int n ;
    cin >> n ;
    for(int i =1 ; i<=n ; i++){
        for(int j =1 ; j<=n ; j++)
        {
            cout << j << " " ; 
        }
        cout << endl;
    }
    return 0 ;
}