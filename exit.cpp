#include<iostream>

#include<process.h>

using namespace std;

int main() {
    int i = 0;

    while(i<10){
        cout << "yes we are in loop no :" << i << "\n";

        if (i==5){
            cout << "we reached : " << i << "\n" ;
            i++;
            continue;
        }

        cout << "this statement will not happen at : 5 \n";

        if ( i ==7){
            cout << "time to exit at :" << i << "\n";
            exit(0);
        }
        i++;
    }





    return 0;
}