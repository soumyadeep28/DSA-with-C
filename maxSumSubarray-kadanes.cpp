#include <iostream>
#include <vector>
using namespace std ; 

int main() {
    int n = 6 ; 
    int arr[6] = {1,2,3,-5,4,5} ;
    int maxSum = INT8_MIN ;
    int currSum = 0;
    for (int start = 0 ; start < n ; start++){
        currSum = currSum + arr[start];
        maxSum = max(maxSum , currSum);
        if (currSum <0) {
            currSum = 0;
        }        
    }
    cout << maxSum ;
    return 0 ;
}