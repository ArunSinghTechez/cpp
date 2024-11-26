#include<iostream>

using namespace std;

class shape{
    private:
    int length;
    int width;


    public:

    shape(){
        length = 0;
        width = 0;
    }

    void display();
};

void shape :: display(){
    cout << "\n the area of the shape is :" << length * width << endl;
}



int main() {

    shape s1;
    s1.display();




    return 0;
}