#include <iostream> 
#include <vector>
using namespace std ; 

int main() {
    int size =5 ;
    vector<int> arr= {2,7,11,33,-90};
    int target=13 ;
    vector<int> resp ;
    int n = arr.size();
    for (int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if (arr[i] + arr[j] )
            {
                resp.push_back(arr[i]) ;
                resp.push_back(arr[j]) ;
                cout << resp[0] << resp[1] <<endl ;
            }
        }
    }
}