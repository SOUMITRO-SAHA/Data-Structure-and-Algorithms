using namespace std;
template <typename T>
class QueueUsingArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
        QueueUsingArray(int s){
            data = new T[s];
            nextIndex = 0;
            firstIndex = -1;
            size = 0;
            capacity = s;
        }
        int getSize(){
            return size;
        }
        bool empty() { return size == 0;}

        //insert element
        void enqueue(T element){
            if (size == capacity)
            {
                cout<<"Queue is Full"<<endl;
                return;
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
        T dequeue(){
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