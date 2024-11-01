#include<iostream>

using namespace std;

int fact(int);




int main(){

    int factr,num;

    cout << "enter the number\n";

    cin >> num;



    factr = fact(num);
    cout << "the factorial is :" << factr << "\n";



    return 0;
}


int fact(int val){
    int factor;
    
    if (val <=1){
        return 1;
    }
    else {
        factor = val * fact(val-1);
    }
    
    return factor;
}

