#include <bits/stdc++.h>
using namespace std;

// T.C - O(n)
// S.C - O(1)
bool palindromStr(string str){

    int n = str.length() - 1;
    for(int i = 0; i < str.length()/2; i++){
        if(str[i] != str[n - i])
        return false;
    }

    return true;

}

int main(){
    string str = "ABCDCBA";
    if(palindromStr(str)){
        cout << "True";
    }
    else
        cout << "False";
}