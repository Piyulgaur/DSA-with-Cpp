#include <iostream>
using namespace std;

int main(){

    int a[5] = {1,5,7,3,2};
    int b[3] = {2,3,4};

    for (int  i = 0; i < 5; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(a[i]==b[j]){
                cout << b[j] << " ";
                b[j] = -12345;
                break;
            }
        }
    }
    
}