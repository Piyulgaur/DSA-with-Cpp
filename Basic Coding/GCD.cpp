#include <iostream>
using namespace std;

// T.C - O(min(a,b))
// S.C - O(min(a,b))
int gcd(int a, int b){
    if(a == 0 || b == 0 )
    return 0;
    else if(a == b )
    return a;
    else if(a > b)
    return gcd(a-b, b);
    else
    return gcd(a, b-a);
}

// T.C - O(min(a,b))
// S.C - O(1)
int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}

int main(){
    int a = 63;
    int b = 42;
    cout << gcd(a,b);
}