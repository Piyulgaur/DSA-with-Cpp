#include <iostream>
using namespace std;

int num(){
    
    return 5;
    exit(0);
}

int main () {
   
   int x = num();
   if(x == 5)
   cout << x;

   return 0;

  
}