#include<iostream>

using namespace std;

class student{

   private:
  // public:
    int rollno;
    int id;


    public:

    void get(int val1,int val2){
        rollno = val1;
        id = val2;
    }

    

    void display() {

        cout << "the data is \n";
        cout << rollno << "\t" << id;

    }



};


int main(){

        student S1;
        //S1.rollno = 11; works only is data in class is public
        //S1.id = 102;

        S1.get(11,102); // it is manadatory for accessing private data
        S1.display();

    return 0;
}