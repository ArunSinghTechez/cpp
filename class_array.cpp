#include<iostream>

using namespace std;

class arr{

    private:
    int id;
    int roll_no;

    public:

    void getdata(int val1,int val2){
        id = val1;
        roll_no = val2;
    }

    void display(){
        cout << "the data is :\n";
        cout << id << "\t" << roll_no << "\n";
    }





};



int main(){

    int size;

    cout << "Enter the no of elements required\n";
    cin >> size;

    arr list[size];

    for(int i = 0;i<size;i++){
        int data1;
        int data2;
        cout << "Enter the data in the element at index no ----" << i + 1 << "\n";
        cin >> data1 >> data2 ;
        list[i].getdata(data1,data2);
    }

    cout << "\nthe data entered is : \n";

    for(int i = 0;i<size;i++){
        list[i].display();
    }



    return 0;
}