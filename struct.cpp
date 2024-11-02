#include<iostream>

using namespace std;

struct size{
    int wide;
    int len;
};

struct room{
    size bedroom;
    size hall;
};

struct price{
    room prize;
}

int main(){



    struct room R1;
    cout << "Enter the width:\n";
    cin >> R1.bedroom.wide;

    cout << "Enter the length:\n";
    cin >> R1.bedroom.len;

    cout << "the area of bedroom is :\n";
    cout << R1.bedroom.wide*R1.bedroom.len;


     cout << "\nEnter the width:\n";
    cin >> R1.hall.wide;

    cout << "Enter the length:\n";
    cin >> R1.hall.len;

    cout << "the area of hall is :\n";
    cout << R1.hall.wide*R1.hall.len;





    return 0;
}