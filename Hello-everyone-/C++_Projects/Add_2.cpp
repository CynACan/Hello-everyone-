#include<iostream>
using namespace std;

class Add{
private:
 int num1;
 int num2;
public:
void setAdd(int n1, int n2)
{num1=n1;
 num2=n2;
}
int AddNum()const
{
int ans=num1+num2;
return ans;
}
};

int main()
{
int num1,num2;
cout<<"please enter your 1st integer"<<endl;
cin>>num1;
cout<<"please enter your 2nd integer"<<endl;
cin>>num2;
Add addition;
addition.setAdd(num1,num2);
cout<<"Here are the result: "<<addition.AddNum()<<endl;
return 0;
}
