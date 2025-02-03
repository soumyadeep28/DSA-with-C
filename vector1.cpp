#include <iostream>
#include <vector> 
using namespace std ;
int main(){

    //vector<int>  vec ;

    //vector<int> vec = {1,2,3 , 4 , 5 , 7} ;
    vector<int> vec(3,0) ;

    cout << vec[0] << endl;

    cout << "loop in vector like for each  " << endl;
    for(int i : vec )
    {
        cout << "vector string : " <<  i << endl ; 
    }
    return 0 ; 
     
}