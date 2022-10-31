#include <iostream>
using namespace std;

int setbit(int x){

    int c=0;
    while( x != 0){
        if( x&1 ){
            c++;
        }
        x = x>>1;
    }
    return c;
}

int main(){

    int a,b;
    cin >> a >> b;
    
    int ans = 0;
    ans = ans + setbit(a);
    ans = ans + setbit(b);

    cout << " total no. of SetBits : " << ans << endl ;
    
    return 0; 
}