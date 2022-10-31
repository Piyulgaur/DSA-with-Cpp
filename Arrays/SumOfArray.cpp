#include <iostream>
using namespace std;

void InputArray(int arr[], int size){

    for(int i = 0; i < size ; i++){
        cin >> arr[i] ;
    }

}

void SumofArray(int arr[], int size){

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum of Array is " << sum << endl;
    

}
 
int main(){

    int n;
    cin >> n;

    int arr[10];

    InputArray(arr, n);
    SumofArray(arr, n);

}