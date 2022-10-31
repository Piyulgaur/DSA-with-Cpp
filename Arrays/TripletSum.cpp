#include <iostream>
using namespace std;

int main(){
    int ans = 0;
    int arr[5] = {2,5,3,2,4};

for(int  i= 0 ; i < 5; i++){
    ans = ans^arr[i];
    cout << ans << endl;
}

cout<< "----------------- \n" ; 

for(int i = 1; i < 5; i++){
    ans = ans^i;
    cout << ans << endl;
}

}