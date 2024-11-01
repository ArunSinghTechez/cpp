#include<iostream>

using namespace std;

int main(){

    int fruit;

    cout << "enter the quantity\n";
    cin >> fruit;

    switch (fruit){

        case 1:
        cout << "we have" << fruit << " banana fruits\n";
        break;


        case 2:
        cout << "we have" << fruit << " apple fruits\n";
        break;

        case 3:
        cout << "we have" << fruit << " Guava fruits\n";
        break;


         case 4:
        cout << "we have" << fruit << " orange fruits\n";
        break;


        case 5:
        cout << "we have" << fruit << " grapes fruits\n";
        break;



        case 6:
        cout << "we have" << fruit << " papaya fruits\n";
        break;



        default :
        cout << "we have" << fruit << " other fruits\n";
        break;








    }





    return 0;
}