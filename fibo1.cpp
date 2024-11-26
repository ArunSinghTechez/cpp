#include<iostream>

using namespace std;

//fibonacci series DSA using loops

int main(){
    int n;
    cout << "Enter the fibbonacci number " << endl;
    cin >> n;

    int num1 =0;
    int num2 =1;

    int fibo;

    cout << num1 <<"\t";
    cout << num2 << "\t";

    for(int i =0;i<n-2;i++){
        
        fibo = num1 + num2;
        cout  << fibo << "\t";
        num1 = num2;
        num2 = fibo;

    }


    


    return 0;
}