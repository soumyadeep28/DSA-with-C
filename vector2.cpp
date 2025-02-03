#include <iostream>
#include <vector> 
using namespace std ;


int main(){
    vector<int> vec = {1,2,3 , 4 , 5 , 7} ;

    cout << "size of the vector  = " << vec.size() << endl;

    vec.push_back(99);
    cout << "size of the vector  = " << vec.size() << endl;

    vec.pop_back();
    cout << "size of the vector  = " << vec.size() << endl;
        
    for (int val : vec){
        cout << val << endl ;
        
    }

    cout << "front " << vec.front() <<endl ; 
    cout << "back " << vec.back() << endl ;

    cout << "index of 3 :  " << vec.at(2) << endl ;


    return 0 ; 
     
}