#include <iostream>
using namespace std;

int BinarySearch( int arr[], int size, int key){

        int start = 0;
        int end = size - 1;

        int mid = start + ( end - start )/2;

        while( start <= end){

            if( key == arr[mid] ){
                return mid;
            }

            if( key > arr[mid]){
                start = mid + 1;
            }
 
            else{
                end = mid - 1;
            }
            mid = start + ( end - start )/2;
        }

        return 0;
}

int main(){
    
    int array[5] = {4,7,12,24,29};

    cout << "Key is found at index " << BinarySearch(array, 5, 29);

    return 0;
}