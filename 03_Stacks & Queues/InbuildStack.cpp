#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    //Inserting the elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.size()<<endl;
    cout << s.empty()<<endl;


return 0;
}