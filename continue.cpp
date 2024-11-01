#include<iostream>

using namespace std;


int main() {

    int i,num;
    i=num=0;

    cout << "enter the number to find the even numbers\n";
    cin>> num;

    while(i<=num){
        if(i%2==0){
            cout << i << " is the even number\n";
        }
        i++;
    }


    cout << "*****************************************************\n";

   





    return 0;
}