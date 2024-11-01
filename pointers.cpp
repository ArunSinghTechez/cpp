#include<iostream>

using namespace std;



int main(){

    int *ptr;
    int val = 100;

    ptr = &val;


    cout << "the address of  val : " << &val << "\n";
    cout << "the value store in ptr is :" << ptr << "\n";
    cout << "the address of ptr is :" << &ptr << "\n";

    delete(ptr);
   
    return 0;
}