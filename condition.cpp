#include <iostream> 
using namespace std ; 

int main() {
    cout << "enter the data odd or even "<< endl ;
    int num;
    cin >> num ;
    if (num % 2 == 1) {
        cout << "ODD" << endl ;
    }else{
        cout << "EVEN" <<endl ;
    }
    return 0;
}