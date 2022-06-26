//Creating Class Stack using Templates for general pourpose.
template <typename T>
class stack{
    T *data;
    int nextIndex;
    int capacity;
    public:
        stack(){
            data = new T[5];
            capacity = 5;
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
        void push(T element){
            if (nextIndex == capacity)
            {
                T *newData = new T[2 * capacity]; 
                for (int i = 0; i < capacity; i++)
                {
                    newData[i]= data[i];
                }
                capacity *= 2;
                delete []data;
                data = newData;
                
            }
            
            data[nextIndex] = element;
            nextIndex++;
        }
        //For Deleting the last element from the Stack
        T pop(){
            if (isEmpty())
            {
                std::cout<<"Stack is Empty"<<std::endl;
                return 0;
            }
            
            nextIndex--;
            return data[nextIndex];
        }

        T top(){
            if (isEmpty())
            {
                std::cout<<"Stack is Empty"<<std::endl;
                return 0;
            }
            return data[nextIndex-1];
        }
};