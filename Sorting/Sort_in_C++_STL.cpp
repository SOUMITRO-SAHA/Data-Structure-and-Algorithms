#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int arr[n] = {5,8,2,9,4};
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    // for(int x:arr){
    //     cout<<x<<"\t";
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    

    return 0;
}