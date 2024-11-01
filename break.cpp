#include<iostream>
using namespace std;


int main() {
    int i, total;
    i =0; total = 10;

    for(i;i<10;i++){
        total = i + total;
        cout << "here i :" << i << "\t";

    /*
        if (i==5){
            break;
        }
    

*/
    }
    cout << "the total is : " << total;


    return 0;
}