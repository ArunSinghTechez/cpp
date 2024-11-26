#include<iostream>


using namespace std;


int main(){
    int myarr[] = {34,12,78,1,22,78,11};

    int n = sizeof(myarr)/sizeof(myarr[0]);
    int temp = 0;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(myarr[j]>myarr[j+1]){
                temp = myarr[j];
                myarr[j]= myarr[j+1];
                myarr[j+1]= temp;
            }
        }
    }

    cout << "the sorted array is \n";
    for(int i=0;i<n;i++){
        cout << myarr[i] <<"\t";
    }



    return 0;
}