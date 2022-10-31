#include <iostream>
using namespace std;

/*
int main(){

    int n;
    cin >> n;

    int arr[100];
    int temp = 0;
    int size = n;

    for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
    }

    for (int i = 0; i < n; i++){

        cout << arr[i] << " " ; 
    }
    cout << endl ; 


    if(n%2 != 0){
        size = n -1;
    }

    for(int i = 0; i < size; i++){
        if(i%2 == 0){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
    for (int i = 0; i < n; i++){

        cout << arr[i] << " " ; 
    }
    cout << endl ; 
}
*/

int main(){

    int n;
    cin >> n;
    int arr[100];


    for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
    }

    for( int  i= 0 ; i < n; i += 2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }

    for (int i = 0; i < n; i++){

        cout << arr[i] << " " ; 
    }
    cout << endl ;

    return 0;
}