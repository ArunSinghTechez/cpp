#include <iostream>

using namespace std;


//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#ifndef __CXX_TEST_MAIN__


struct stackNode{
    int data;
    stackNode* next;
};
class stack{
    private:
    stackNode* top;

    public:
    stack(){
      top = NULL;  
    }
    ~stack(){
        stackNode* del;
        
        while(top!=NULL){
            del=top;
            top=top->next;
            delete del;
        }
    }

    bool isEmpty(){
        if(top==NULL){
            
            return true;
        }
        return false;
    }

    void push(int value);
    int peek();
    int pop();

   
    

};
void stack :: push(int value){
    stackNode* temp;
    temp = new stackNode;
    temp->data = value;
    temp->next = NULL;
    if(top==NULL){
        top=temp;
    }
    else {
        temp->next = top;
        top=temp;
    }
}
int stack :: peek(){
    if(isEmpty()){
        cout << "Stack underflow no item present"<<endl;
        return -1;
    }
    else {
        stackNode* peekItem;
        peekItem = top;
        return peekItem->data;
    }
}

int stack :: pop(){
    if(isEmpty()){
        cout << "stack underflow Operation cannot performed"<<endl;
        return -1;
    }
    else {
        int popped;
       stackNode* popItem;
       popItem = top;
       popped = popItem->data;
       top=top->next;
       delete popItem;
       return popped;

    }
}


int main(){

    stack S1;
    int CH;

    cout <<"Do you want to continue 1 for Yes and 0 for No"<<endl;
    cin >> CH;
    while(CH){
        int choice;
        cout << "Enter the choice"<<endl;
        cout << "1 for Push" << endl;
        cout << "2 for Peek" << endl;
        cout << "3 for Pop"  << endl;
        cout << "4 for Exit" << endl;

        cin >> choice;
        switch(choice){
            case 1:
            int element;
            cout << "enter the data" << endl;
            cin >> element;
            S1.push(element);
            break;

            case 2:
            int peekElement;
            peekElement = S1.peek();
            cout << peekElement << endl;
            break;

            case 3:
            int poppedElement;
            poppedElement = S1.pop();
            cout << poppedElement << endl;
            break;

            case 4:
            CH = 0;
            cout << "exiting" << endl;
            break;
        }
    }


    
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#endif
