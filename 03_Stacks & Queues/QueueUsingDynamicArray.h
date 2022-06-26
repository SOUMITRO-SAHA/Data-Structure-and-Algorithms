using namespace std;
template <typename T>
class QueueUsingDynamicArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    int j = 0;
    public:
        QueueUsingDynamicArray(){
            capacity = 5;
            data = new T[capacity];
            nextIndex = 0;
            firstIndex = -1;
            size = 0;
        }
        int getSize(){
            return size;
        }
        bool empty() { return size == 0;}

        //insert element
        void push(T element){
            //Condition for Data Overload
            if (size == capacity)
            {
                T *newData = new T[2 * capacity];
                for (int i = firstIndex; i < capacity; i++)
                {
                    newData[j] = data[i];
                    j++;
                }
                for (int i = 0; i < firstIndex; i++)
                {
                    newData[j] = data[i];
                    j++;
                }
                delete [] data;
                data = newData;
                firstIndex = 0;
                nextIndex = capacity;
                capacity *= 2;
            }
            
            data[nextIndex] = element;
            nextIndex = (nextIndex + 1) % capacity;
            size++;
            if (firstIndex == -1)
            {
                firstIndex++;
            }
        }

        // Print the Front element
        T front(){
            if(empty()){
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
            return data[firstIndex];
        }
        //Deleting element
        T pop(){
            int ans = data[firstIndex];
            if(empty()){
                cout<<"Queue is Empty"<<endl;
                return 0;
            }
            firstIndex = (firstIndex + 1) % capacity;
            size--;

            return  ans;
        }

};