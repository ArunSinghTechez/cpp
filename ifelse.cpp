#include <iostream>
using namespace std;

int main(){

    int num1;
    cout << "Enter the Age\n";
    cin >> num1;
    if (num1>18){
        cout << "yes you can vote , you are :" << num1;
    }

    else {
        cout << "you can not vote , you are:" << num1;
    }


    return 0;
}