
#include <iostream>
using namespace std ; 

void reverse_arr (int arr[] , int size){
    int i=0 , j =size-1 ;

    while(i<j){
        int temp = arr[i] ; 
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++;
        j--;

    } 


}
void print_arr(int arr[], int size)
{
    for(int i = 0 ;i<size ; i++)
    {
        cout << arr[i] << " " ; 
    }
}
int main(){
    int size =10;
     int arr1[10] = {10,20,30,80,50,44 , 97 ,45 , 78};

     cout << " reverse the array: " << endl ; 
     print_arr(arr1 , size);

     reverse_arr(arr1 ,size);

     cout << " reversed the array: " << endl ; 
     print_arr(arr1 , size);


    return 0 ;
}