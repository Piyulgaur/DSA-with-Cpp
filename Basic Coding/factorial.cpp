#include<bits/stdc++.h>
using namespace std;

//iterative method
//T.C - O(n)
//S.C - O(1)
int factorial(int n){
    int ans = 1;
    for(int i = 2; i <= n; i++ ){
        ans = ans * i;
    }

    return ans;
}

//using recursion
//T.C - O(n)
//S.C - O(1)
int factorial(int n){
    
    if(n == 0 || n == 1)
    return 1;

    return n*factorial(n-1);
}