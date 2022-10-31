#include <algorithm>
using namespace std;

void bubblesort(int arr[], int n){

    for(int i = 1; i < n; i ++){
        bool isswap = false;;
        for(int j = 0 ; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isswap = true;
            }
        }
        if(isswap = false){
            break;
        }

    }
}

// T.C = O(n2)
// S.C = O(1)
// stable