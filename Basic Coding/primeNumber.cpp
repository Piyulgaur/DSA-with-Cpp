#include <bits/stdc++.h>
using namespace std;

//iterative method
// T.C - O(n)
// S.C - O(1)
bool isPrime(int n){
    if(n <= 1)
    return false;

    for(int i = 2; i<n; i++){
        if(n % i == 0)
        return false;
    }

    return true;
}

//iterative method
// T.C - O(sqrt n)
// S.C - O(1)
bool isPrime(int n){
    if(n <= 1)
    return false;

    for(int i = 2; i<sqrt(n); i++){
        if(n % i == 0)
        return false;
    }

    return true;
}

//using recursion
// T.C - O(sqrt n)
// S.C - O(1)
bool isPrime(int n, int i = 2){
    if(n <= 2)
    return (n == 2)? true: false;
    if(n % i == 0)
    return false;
    if( i * i > n)
    return true;

    return isPrime(n, i+1);
}