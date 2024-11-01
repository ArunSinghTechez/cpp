#include<iostream>

using namespace std;

int x;

void func1();
void func2();



int main(){

    cout << "the value of x is : " << x << "\n";
    func1();
    cout << "the value of x is : " << x << "\n";
    func2();
    cout << "the value of x is : " << x << "\n";


    return 0;
}

void func1(){

    x = x+10;

}

void func2(){
    x++;
    
}