#include <bits/stdc++.h>
using namespace std;

// T.C - O(log n)
// S.C - O(1)
bool isPalindrome(int n){

    int rev = 0;
    int temp = n;
    while(temp != 0){
        rev = (rev*10) + (temp%10); //remainder
        temp = temp/10;
    }

    return (rev == n);
}

int main(){
    int n = 252;

    if(isPalindrome(n))
    cout << "true";
    else
    cout << "false";

}