#include <bits/stdc++.h>
using namespace std;

//For nth Fibonacci Number
//using recusrsion 
// T.C - O(n)
// S.C - O(n)
int fib1(int n){
    if(n <= 1)
        return n;
    
    return fib1(n-1) + fib1(n-2);
}

//For first n number of fibonacci
//using recursion
// T.C - O(n*2^n)
// S.C - O(n)
/*
    for(i = 0; i<n; i++){
        cout << fib(i) << " ";
    }
*/
int fib2(int n){
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else{
        return fib2(n-1) + fib2(n-2);
    }
}

//iterative method
// T.C - O(n)
// S.C - O(1)
void fib3(int n){
    int a = 0, b = 1, c;
    cout << a << " ";
    for(int i = 1; i < n; i++ ){
        cout << b << " ";
        c = a+b;
        a = b;
        b = c;
    }
}

int main(){
    int n ;
    cin >> n;

    cout << fib1(n);
}