#include <iostream>
#include <vector>
using namespace std ; 

int main() {
    int n = 6 ; 
    int arr[6] = {1,2,3,-5,4,5} ;
    int maxSum = INT8_MIN ;
    for (int start = 0 ; start < n ; start++){

        int currSum = 0 ;
        for (int end = start ; end < n ; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum , maxSum);
        }
        
    }
    cout << maxSum ;
    return 0 ;
}