#include <iostream>

using namespace std;


int main(){
    int val1,val2,val3;

    cout << "enter 2 numbers\n";
    cin >> val1 >> val2;

    (val1>val2)? val3 = val1 : val3 = val2;

    cout << "the larger number is :" << val3 ;

    



    return 0;
}