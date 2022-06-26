#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void print1ToN(int n){
    if(n == 0){
        return;
    }
    print1ToN(n-1);
    cout<<n<<" ";
}
//Todo: Can You Write the Above function as Tail Recursive
//This will run faster because of Tail Recursion.
void print(int n, int k=1){
    if(n<1){
        return;
    }
    cout<<k<<" ";
    print(n-1,k+1);
}

//Here, This is the Fastest Recursion Function because it is Tail Recursive
void printNTo1(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print1ToN(n-1);
}
int main(){
    // print1ToN(5);
    print(5);
    cout<<endl;
    printNTo1(5);

    return 0;
}