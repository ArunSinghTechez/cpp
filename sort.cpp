#include<iostream>


using namespace std;



int main(){
    int arr[10];
    int temp=0;

    cout << "ENter the elements of array:\n";
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    cout << "The array elements are :\n";
        for(int i = 0;i<10;i++){
            cout << arr[i]<< "\t";
        }
    
    for(int i=0;i<10-1;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
     cout << "\nThe array elements after sorting  are :\n";
        for(int i = 0;i<10;i++){
            cout << arr[i]<< "\t";
        }
    






    return 0;
}