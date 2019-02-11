#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void literal(char);
string shorten(string);
void FirstChar(string); 
string ID (string , int);
string Exp(string,int);
void Lit(char);
string Term(int,int,string);
string Fact(int,int,string);
int main(){

string input;
int c=0;
cout<<"Enter: "<<endl;
getline(cin,input);                  //input the expression to be checked
string Test = ID(input,input.length());
cout<<"Valid string: "<<Test<<endl;
return 0;}

void literal (char c){               //testing accepted ID format 
switch(c)
  {
case'a':break;case'b':break;case'c':break;case'd':break;case'e':break;
case'f':break;case'g':break;case'h':break;case'i':break;case'j':break;
case'k':break;case'l':break;case'm':break;case'n':break;case'o':break;
case'p':break;case'q':break;case'r':break;case's':break;case't':break;
case'u':break;case'v':break;case'w':break;case'x':break;case'y':break;
case'z':break;case'A':break;case'B':break;case'C':break;case'D':break;
case'E':break;case'F':break;case'G':break;case'H':break;case'I':break;
case'J':break;case'K':break;case'L':break;case'M':break;case'N':break;
case'O':break;case'P':break;case'Q':break;case'R':break;case'S':break;
case'T':break;case'U':break;case'V':break;case'W':break;case'X':break;
case'Y':break;case'Z':break;case'_':break;case'0':break;case'1':break;
case'2':break;case'3':break;case'4':break;case'5':break;case'6':break;
case'7':break;case'8':break;case'9':break;
default:cout<<c<<": not a valid ID\n ";exit(EXIT_FAILURE);
break;
  }
return;}

void Lit(char c){
switch(c)
   {
case'0':break;case'1':break;case'2':break;case'3':break;case'4':break;
case'5':break;case'6':break;case'7':break;case'8':break;case'9':break;
default:cout<<":Invalid literal\n";exit(EXIT_FAILURE);
   }
return;}

string shorten(string test)
{int i,j;
for(i=0;i<test.length();i++)
  for(j=i+1;j<test.length();){
    if(test[i]==' ' && test[j]==' ')
      j++;
    else if(test[i]!=' ' && test[j]==' ')
      {i++;
       j++;}
    else if(test[i]==' ' && test[j]!=' ')
      {test[i]=test[j];
       test[j]=' ';
       i++;
       j++;}
    else
     {i++;
      j++;}
   }
return test;}

void FirstChar(string input)
{int i=0;
 while(input[i]!='\0')
    {if(i==0)
      {if((input[i]=='0')||(input[i]=='1')||(input[i]=='2')||(input[i]=='3')||
          (input[i]=='4')||(input[i]=='5')||(input[i]=='6')||(input[i]=='7')||
          (input[i]=='8')||(input[i]=='9'))
            {cout<<"Error,input[0] entry not valid";exit(EXIT_FAILURE);}
       else i++;}
     else if((input[i]!=';')&&(input[i+1]!='\0'))
       i++;
     else if((input[i]==';')&&(input[i+1]!='\0'))
       {if((input[i+1]=='0')||(input[i+1]=='1')||(input[i+1]=='2')||
          (input[i+1]=='3')||(input[i+1]=='4')||(input[i+1]=='5')||
          (input[i+1]=='6')||(input[i+1]=='7')||(input[i+1]=='8')||
          (input[i+1]=='9'))
             {cout<<"Error,other literal entry not valid";exit(EXIT_FAILURE);}
        else i++;}
     else i++;
    }
return;}     

string ID (string input,int isLen){ //testing if valid ID to continue
int i=0;
string inputN=shorten(input);
FirstChar(inputN);
while(inputN[i]!='\0')              //testing to end if nothing is wrong 
 {
 if(inputN[i]=='='){
   inputN=Exp(inputN,i);
   i++;
   }
 else if((inputN[i]==';')||(inputN[i]==' ')||(inputN[i]=='*')||
         (inputN[i]=='+')||(inputN[i]=='-')||(inputN[i]=='(')||
         (inputN[i]==')'))
   i++;
 else{
   literal(inputN[i]);
   i++;}
 }
return inputN;}

string Exp(string input,int i){
int begin=i,end=i;
while(input[end]!=';')
  end++;
input=Term(++begin,--end,input);
return input;}

string Term(int numFront, int numEnd,string input)
{
input=Fact(numFront,numEnd,input);
return input;}

string Fact (int start,int end, string input)
{
if(start==end){
  if(input[start]=='0'){
    return input;}}
else{
  while(start!=end)
     {if(input[start]=='0'){
        cout<<"invalid entry, number starting with 0";exit(EXIT_FAILURE);}
      else{
     Lit(input[start]);
     start++;}
     }
    } 
return input;
}