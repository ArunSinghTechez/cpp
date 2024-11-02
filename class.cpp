#include<iostream>

using namespace std;


class student{

    private:


    int roll_no;
    int stu_id;

    public:

    void setdata(int roll,int id){
        roll_no = roll;
        stu_id = id;
    }

    void print(){
        cout << "the student data is : \n";
        cout << roll_no <<"*************" << stu_id << "\n";
    }




};




int main(){

    student S1;
    S1.setdata(11,101);

    S1.print();



    return 0;
}