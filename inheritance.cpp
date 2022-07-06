#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    string brand = "Ford";
    void honk(){
        cout << "tuut, tuut!\n";
    }
};

class autoVehicle{
    public:
    string Abrand = "Tesla";
};


// Derived from multiple class
class Car: public Vehicle, public autoVehicle{
    public:
    string model = "mustang";
};

int main(){

    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model + " " + myCar.Abrand << endl;

    return 0;
}