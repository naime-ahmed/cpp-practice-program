#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
    string brand;
    string model;
    int year;
    public:
    void myMethod(){
        year++;
    }
};

int main(){

    Car carObj;
    carObj.brand = "BMW";
    carObj.model = "X5";
    carObj.year = 1969;

    carObj.myMethod();
    cout << "Brand: " << carObj.brand << " model: " << carObj.model << " year: " << carObj.year << endl;



    return 0;
}

