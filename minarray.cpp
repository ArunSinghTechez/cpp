#include<iostream>

using namespace std;

void minarray();


int main(){


    minarray();
    return 0;
}


void minarray(){
    int myarr[]={11,56,57,3,99};
    int size = 0;
    int minval = myarr[0];
    size = sizeof(myarr)/sizeof(myarr[0]);


    for (int i = 0;i<size;i++){
        if(myarr[i]<minval){
            minval = myarr[i];
        }
    }

    cout << "the min element is " << minval << endl;
}