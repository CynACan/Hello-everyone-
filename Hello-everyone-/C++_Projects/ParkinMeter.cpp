#include<iostream>
using namespace std;

class ParkingMeter{
private:
double maxTime;
double rate;
double time;
public:
void insert(double quarter)
{time=quarter*rate;}
void checkTime()const
{cout<<"maxtime: "<<maxTime<<" rate: "<<rate<<" Time left: "<<time<<endl;}
ParkingMeter(double max, double r)
{maxTime=max;
rate=r;}
};


int main()
{
cout<<"Test new Parking meter with max time = 60 mins, rate=15mins per quarter and return time left "<<endl;
ParkingMeter park(60,15);
cout<<"inserting 2 quarters "<<endl;
park.insert(2);
cout<<"\nnow checking time "<<endl;
park.checkTime();
return 0;
}

