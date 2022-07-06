#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string n, string m, int y){
        brand = n;
        model = m;
        year = y;
    }
};

int main(){

    Car carObj("BMW", "X5", 1999);

    cout << "Brand:" <<  carObj.brand << " model:" << carObj.model << " year:" << carObj.year << endl; 
}