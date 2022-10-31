#include <bits/stdc++.h>
using namespace std;


void SelectionSort(int arr[], int size){

    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

}

// T.c = o(n2)
// s.c = o(1)
// unstable