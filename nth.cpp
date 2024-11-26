#include<iostream>
using namespace std;
int nth(int n);

int main(){


    int number;
    cout << "ENter nth term to find in the series of:" <<endl;
    cin >> number;

    cout << nth(number);


    return 0;
}


int nth(int n){
    if (n<=1){
        return n;
    }

    else {
        return nth(n-1) + nth(n-2);
    }
}