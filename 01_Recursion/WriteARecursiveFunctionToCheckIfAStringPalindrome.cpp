#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isPal(string str,int s, int e)
{
    if (s == e)
    {
        return true;
    }
    if (s > e)
    {
        return true;
    }
    
    
    if(str[s] != str[e]){
        return false;
    }
    return isPal(str,s+1,e-1);


}

int main(){
    string str = "aabaa";
    int n = str.length();
    cout<<isPal(str,0,n-1);

    return 0;
}