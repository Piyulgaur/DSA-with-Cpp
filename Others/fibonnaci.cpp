#include <iostream>
using namespace std;

int fibonacci( int n){

   int a=0;
   int b=1;

   if( n == 1){
        return a;
    }

    else if( n == 2){
        return b;
    }

   for(int i = 2; i < n; i++){

       int temp = a + b;
       a= b;
       b = temp;

   }

    return b;
}

int main(){

    int n;
    cin >> n;
  
    cout << n << "no. in fibonacci series is : " << fibonacci(n) <<endl;
    return 0;

}