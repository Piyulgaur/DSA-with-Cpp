#include <iostream>
using namespace std;

int main(){

    int hundred, fifty, twenty, ones;
    int amt  ;
    cin >> amt;
    
    switch(1){

        case 1 : hundred = amt/100;
                 amt = amt % 100;
                 cout << " No. of Notes of hundred : " << hundred << endl;

        case 2 : fifty = amt/50;
                 amt = amt % 50;
                 cout << " No. of NOtes of Fifty : " << fifty <<endl;

        case 3 : twenty = amt/20;
                 amt = amt % 20;
                 cout << " No. of Notes of twenty : " << twenty <<endl;

        case 4 : ones = amt/1;
                 amt = amt % 1;
                 cout << " No. of Notes of One : " << ones <<endl;

    }
    

}