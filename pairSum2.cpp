#include <iostream> 
#include <vector>
using namespace std ; 

int main() {
    int size =5 ;
    vector<int> arr= {2,7,11,33,90};
    int target=13 ;
    int i=0 , j= arr.size() ;
    while (i<j)
    {
        int sum = arr[i] + arr[j] ;
        if (sum > target)
        {
            j--;
        }else if (sum < target)
        {
            i++;
        }else if (sum == target)
        {
            cout << arr[i] << " " << arr[j] ;
            break;
        }
        
        
    }
    
}