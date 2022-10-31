#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int , string> p;

    p = make_pair(1,"heelo");

    cout << p.first << " " << p.second << endl;

    p = {1, "bye"};

    cout << p.first << " " << p.second;
}