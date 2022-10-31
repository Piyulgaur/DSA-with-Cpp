#include <iostream>
using namespace std;

//brute force


//optimized 1
/*
int findUnique( int arr[], int n){

    int ans = 0;
    for(int i = 0 ; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}

int main(){

   int arr[7] = {1,2,2,1,3,6,3};
   int x = findUnique(arr, 7);
   cout << x << endl;
   

}
*/