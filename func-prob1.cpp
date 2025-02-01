#include<iostream> 
using namespace std ;

int sumfunc(int n , int m  ){

    // function to get the sum  
    int sum = 0 ; 
    for(int i=n ; i<=m; i++){
        sum = sum + i ; 
    }
    return sum ;
}

int factor(int n , int  m ){
    int mul = 1 ;
    for (int i =n ; i<=m ; i++)
    {
        return mul *= i ;
    }
}

int main() {
    cout << "enter 2 digits the range of sum: " ;
    int n , m ;
    cin >> n >> m ; 
    int s = sumfunc(n , m);
    cout << s <<endl ;
    int mul = factor(n,m ); 
    cout << mul << endl ;
    return 0 ;
}