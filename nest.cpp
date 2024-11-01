#include <iostream>
using namespace std;



int main() {
    register int var1;
    cout << "enter your marks\n";

    cin >> var1;

    if (var1>=40){
        if (var1>=90){
            cout << "you got S grade\n";
        }
        else if (var1>=75) {
            cout << "you got A grade\n";
        }

        else if (var1 >= 65){
            cout << "you got B grade\n";
        }

        else if (var1 >= 55){
            cout << "you got C grade\n";

        }

        else {
            cout << "you got D grade\n";
        }
    }

    else {
        cout << "Better luck next time\n";
    }



    return 0;
}