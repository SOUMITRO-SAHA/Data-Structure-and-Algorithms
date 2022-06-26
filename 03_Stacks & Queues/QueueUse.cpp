#include <bits/stdc++.h>
#include <iostream>
// #include "QueueUsingArray.h"
// #include "QueueUsingDynamicArray.h"
// #include <queue>
#include "QueueUsingLL.h"
using namespace std;

int main(){
    QueueUsingLL<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    while (!q.empty())
    {
        cout<<"Top: "<<q.front()<<endl;
        q.pop();
    }
    cout<<"Size: "<<q.getSize()<<endl;
    cout<<"IsEmpty: "<<q.empty()<<endl;






    // ********** Using Inbuilt Queue ***************
    // queue<int> q1;
    // q1.push(10);
    // q1.push(20);
    // cout<<q1.front()<<endl;
    // q1.pop();
    // cout<<q1.front()<<endl;
    // cout<<q1.size()<<endl;
    // cout<<q1.empty()<<endl;

    /*
    ! ############ Queue Using Dynamic Array ############
    QueueUsingDynamicArray<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    while (!q.empty())
    {
        cout<<"Top: "<<q.front()<<endl;
        cout<<"Delete: "<<q.pop()<<endl;
    }
    cout<<q.getSize()<<endl;
    cout<<q.empty()<<endl;

    */
    /*
    ! ########## Queue Using Normal Array ###############
    QueueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<"Break: "<<endl;
    while (!q.empty())
    {
        cout<<"Top: "<<q.front()<<endl;
        cout<<"Delete: "<<q.dequeue()<<endl;
    }
    cout<<q.getSize()<<endl;
    cout<<q.empty()<<endl;
    */

    return 0;
}