#include<iostream>
using namespace std;

class pointer{
    
    private:
    
    int data1;
    int data2;

    public:

    void getdata(){
        cout << "enter the two items here :\n";
        cin >> data1 >> data2;
    }

    void display(){
        cout << "the entered data is :\n";
        cout << data1 << "\t" << data2;
    }
};



int main(){

    pointer *ptr;

    ptr = new pointer;

    ptr->getdata();
    ptr->display();

    return 0;
}