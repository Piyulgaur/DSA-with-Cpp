#include <iostream>
using namespace std;

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

// T.C - O(log(min(a,b))
// S.C - O(log(min(a,b))
int lcm(int a, int b){
    return (a*b)/(gcd(a,b));
}

int main(){
    int a = 15;
    int b = 20;
    cout << lcm(a,b);
}