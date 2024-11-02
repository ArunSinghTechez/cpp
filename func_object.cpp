#include<iostream>

using namespace std;

class subject{

    private:

    int marks1;
    int marks2;
    int final_marks;

    public:

    void getdata(int val1,int val2){
        marks1 = val1;
        marks2 = val2;
    }

    void display(){
        cout << "the marks are :\n";
        cout <<  final_marks << "\n";
    }

     void display1(){
        cout << "the marks are :\n";
        cout <<  marks1 << "\t"<< marks2 << "\n";
    }


    void add_marks(subject D1,subject D2){

        final_marks = D1.marks1+D1.marks2+D2.marks1+D2.marks2;
        

    }





};



int main(){
    subject D1,D2,D3;
    D1.getdata(100,200);
    D2.getdata(150,250);

    D1.display1();
    D2.display1();

    D3.add_marks(D1,D2);

    D3.display();


    return 0;
}