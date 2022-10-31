#include <iostream>
using namespace std;

int ap(int x){
    return 3 * x + 7;
}

int main(){
    int n;
    cin >> n;
    int ans = ap(n);
    cout<< "A.P = " << ans;
    return 0;
}