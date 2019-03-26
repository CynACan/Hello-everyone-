#include<iostream>
using namespace std;

class Rational{
private:
  double numerator1;
  double denominator1;
  double numerator2;
  double denominator2;
public:
  void setNumDen(double,double,double,double);
  void addition()const;
  void subtraction()const;
  void multiplication()const;
  void division()const;
};

void Rational::setNumDen(double n1,double n2,double d1, double d2)
{
numerator1=n1;
numerator2=n2;
denominator1=d1;
denominator2=d2;
}

void Rational::addition()const
{
if(denominator1==denominator2)
  {
   int newN=numerator1+numerator2;
   cout<<"\nyour answer is: "<<newN<<"/"<<denominator1;
  }
else{
double Nnew=(numerator1*denominator2)+(numerator2*denominator1);
double Nden=denominator1*denominator2;
cout<<"\ndenominators not the same "<<endl;
cout<<Nnew<<"/"<<Nden<<endl;
    }
}
void Rational::subtraction()const
{
if(denominator1==denominator2)
  {
   int newN=numerator1-numerator2;
   cout<<"\n your answer is: "<<newN<<"/"<<denominator1;
  }
else{
double Nnew=(numerator1*denominator2)-(numerator2*denominator1);
double Nden=denominator1*denominator2;
cout<<"\ndenominators not the same"<<endl;
cout<<Nnew<<"/"<<Nden<<endl;
    }
}
void Rational::multiplication()const
{
double Nnew=numerator1*numerator2;
double Nden=denominator1*denominator2;
cout<<"\nmultiplication "<<endl;
cout<<Nnew<<"/"<<Nden<<endl;
    }

void Rational::division()const
{
double Nnew=numerator1*denominator2;
double Nden=denominator1*numerator2;
cout<<"\ndivision "<<endl;
cout<<Nnew<<"/"<<Nden<<endl;
    }

int main()
{
cout<<"Testing Rational nums 1/2 and 2/4 "<<endl;
cout<<"and rational num2 1/2 and 2/2"<<endl;
Rational rat1,rat2;
rat1.setNumDen(1,2,2,4);
rat2.setNumDen(1,2,2,2);
cout<<"here are the results rat1:\n";
rat1.addition();
rat1.subtraction();
rat1.multiplication();
rat2.division();
cout<<"\n rat2:";
rat2.addition();
rat2.subtraction();
rat2.multiplication();
rat2.division();
return 0;
}


