#include <iostream> 
using namespace std ;
int main () {
    cout << "this pattern is flyod triangle pattern  like \n 1 \n 21 \n 321 \n" ;
    cout << "Enter the number " ;
    int  n ; 
    cin >> n ; 
    int num = 1;
    for ( int i =0 ; i <n ;i++){
        for(int j =i+1 ; j>0 ; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << endl ;
        
    } 
    

}