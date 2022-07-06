#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int *arr = new int[10];
    // int *arr = new int[10]{0}; initialise the arr with 0

    for (int i = 0; i < 10; i++)
    {
        cin>> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << *(arr+i) << " ";
    }
    delete arr;

    return 0;
}
