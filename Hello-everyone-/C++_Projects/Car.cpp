#include<iostream>
using namespace std;

class Car
{
private:
double fuelEff;
double gasTank;
public:
Car()
{
fuelEff=0.0;
gasTank=0.0;
}
void getGas() const
{cout<<"current gas: "<<gasTank<<endl;}
void addGas(double gas)
{gasTank=gas;}
void drive(double miles)
{fuelEff=miles;
gasTank=gasTank-miles;
cout<<"Miles driven: ";
cout<<miles<<" fuel efficiency: ";
cout<<fuelEff<<" current gas: "<<gasTank<<endl;}

};


int main()
{
 int gasAmount=0;
 int milesDriven=0;
cout<<"checking current gas: ";
Car myCar;
cout<<"Current gas: "<<endl;
myCar.getGas();
cout<<"How much gas do you want to put in?: "<<endl;
cin>>gasAmount;
cout<<"Adding gas Amount....";
myCar.addGas(gasAmount);
myCar.getGas();
cout<<"How many miles are you driving? "<<endl;
cin>>milesDriven;
myCar.drive(milesDriven);
return 0;
}
