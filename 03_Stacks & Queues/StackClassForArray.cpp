#include <iostream>
using namespace std;
class stack{
    int *data;
    int nextIndex;
    int capacity;
    public:
        stack(int totalSize){
            data = new int[totalSize];
            capacity = totalSize;
            nextIndex = 0;
        }
        // To get the Size of the Stack [Means, How many elements are in there]
        int size(){
            return nextIndex;
        }
        //To check Whether there are any element present or not
        bool isEmpty(){
            return nextIndex==0;
        }
        //For Insert a value into the Stack
        void push(int element){
            if (nextIndex == capacity)
            {
                cout<<"Stack is full"<<endl;
                return;
            }
            
            data[nextIndex] = element;
            nextIndex++;
        }
        //For Deleting the last element from the Stack
        int pop(){
            if (isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
                return 0;
            }
            
            nextIndex--;
            return data[nextIndex];
        }

        int top(){
            if (isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
                return 0;
            }
            return data[nextIndex-1];
        }
};