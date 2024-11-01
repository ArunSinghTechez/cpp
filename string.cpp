#include<iostream>
#include<iomanip>

using namespace std;
const int size = 10;

int main(){

    char myname[size+1];

    cout << "enter your name\n";
    cin.getline(myname,size+1);

    cout << "your name is : \t" << myname << "\n";


    return 0;
}