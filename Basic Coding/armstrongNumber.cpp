#include<bits/stdc++.h>
using namespace std;

//T.C - O(log n)
//S.C - O(1)
int order(int x)
{
    int len = 0;
    while (x != 0) {
        len++;
        x = x / 10;
    }
    return len;
}

bool isArmstrong(int n ){
    
    int power = order(n);
    int temp = n;
    int p = 0;

    while( n != 0){
        int rem = (n%10);
        p = p + (rem*power);
        n = n/10;
    }

    return (temp==p);
}
