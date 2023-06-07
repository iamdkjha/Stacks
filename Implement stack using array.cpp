#include<iostream>
using namespace std;

class stack{

    public:

        int size;
        int top;
        int* arr;

    stack(int size){

        this->size = size;
        this->top = -1;
        this->arr = new int[size];

    }

    void push(int num){

        if(top==size-1){

            cout<<"Stack Overflow"<<endl;
            return;

        }

        top++;
        arr[top] = num;

    }

    int pop(){

        if(top==-1){
            cout<<"No elements to pop"<<endl;
            return -1;
        }

        top--;

    }

    int peek(){

        if(top==-1){
            cout<<"No elements in stack"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool empty(){   

        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }


};


int main()
{
    stack s(80);

    s.push(12);
    s.push(21);
    s.push(13);

    cout<<s.peek()<<endl; 

    s.pop();

    cout<<s.peek()<<endl;    

    return 0;
}
