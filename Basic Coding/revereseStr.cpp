#include <bits/stdc++.h>
using namespace std;

//T.C - O(n)
//S.C - O(1)
void rev(string &str){
    
    for(int i = 0; i < str.length()/2; i++){
        swap(str[i], str[str.length() - i - 1]);
    }
    
}

int main(){
    string s = "hello";
    rev(s);
    cout << s;
}