#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//General Function for Testing Recursion
void fun(int n){
    if (n < 1)
    {
        return;
    }
    else{
        cout<<n<<" ";
        fun(n-1);
        cout<<n<<" ";
    }
    
}
int main(){
    fun(4);

    return 0;
}