#include <iostream>
using namespace std;

void InputArray(int arr[], int size){

    for(int i = 0; i < size ; i++){
        cin >> arr[i] ;
    }

}

void printArray(int arr[], int size){


    for (int i = 0; i < size; i++){

        cout << arr[i] << " " ; 
    }
    cout << endl ; 

}

void reverseArray( int arr[], int size){

    int start = 0;
    int end = size - 1;

    while (start <= end){

        swap(arr[start], arr[end]);
        start++;
        end--;

    }

}

int main(){

    int n;
    cin >> n;

    int arr[10];

    InputArray(arr, n);
    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);

}