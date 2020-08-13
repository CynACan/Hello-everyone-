#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include"User.h"
using namespace std;

User::User()
{
   strcpy(first_name,"None");
   strcpy(last_name,"None");
   strcpy(account_info,"None");
   strcpy(password,"None");
   strcpy(username,"None");
  
  
}

void User::Delcont()
{
   strcpy(first_name,"None");
   strcpy(last_name,"None");
   strcpy(account_info,"None");
   strcpy(password,"None");
   strcpy(username,"None");
  
}


void User::SetFname(char fname[])
{strcpy(first_name,fname);}

void User::SetLname(char lname[])
{strcpy(last_name, lname);}

void User::ChangePass(char pass[])
{strcpy(password,pass);}

void User::ChangeUserN(char uname[])
{strcpy(username,uname);}

void User::Setname(char fname[],char lname[])
{
   strcpy(first_name,fname);
   strcpy(last_name,lname);
}

void User::SetUserPass(char uname[], char pass[])
{
   strcpy(username,uname);
   strcpy(password,pass);
}

void User::SetAll(char fname[], char lname[], char accInfo[], char pass[], char uname[])
{
   strcpy(first_name,fname);
   strcpy(last_name, lname);
   strcpy(account_info,accInfo);
   strcpy(password,pass);
   strcpy(username,uname);
}

void User::StartNfile()
{
  fstream NfileSetUp(account_info, ios::out);
  NfileSetUp<<"First Name: ";
  NfileSetUp<<first_name;
  NfileSetUp<<'\n';
  NfileSetUp<<"Last Name: ";
  NfileSetUp<<last_name;
  NfileSetUp<<'\n';
  NfileSetUp<<"Account File Name: ";
  NfileSetUp<<account_info;
  NfileSetUp<<'\n';
  NfileSetUp<<"Password: ";
  NfileSetUp<<password;
  NfileSetUp<<'\n';
  NfileSetUp<<"Username: ";
  NfileSetUp<<username;
  NfileSetUp<<'\n';
  NfileSetUp.close();
}

void User::UpdateFile(char fileN[])
{
  fstream NfileSetUp(fileN, ios::out | ios::in);
  NfileSetUp<<"First Name: ";
  NfileSetUp<<first_name;
  NfileSetUp<<'\n';
  NfileSetUp<<"Last Name: ";
  NfileSetUp<<last_name;
  NfileSetUp<<'\n';
  NfileSetUp<<"Account File Name: ";
  NfileSetUp<<account_info;
  NfileSetUp<<'\n';
  NfileSetUp<<"Password: ";
  NfileSetUp<<password;
  NfileSetUp<<'\n';
  NfileSetUp<<"Username: ";
  NfileSetUp<<username;
  NfileSetUp<<'\n';
  NfileSetUp.close();
}

void User::GetFileInfo()
{fstream NfileSetUP(account_info,ios::out | ios::in);
 char fileInfo[100];
 cout<<"\n\n Now fetching information from file you provided..\n\n";
 NfileSetUP.getline(fileInfo,100);
 while(!NfileSetUP.eof())
 {
   cout<<fileInfo<<endl;
   NfileSetUP.getline(fileInfo,100);
 }
}

void User::LoadInfoToCur(char Filename[])
{ fstream FileLoader(Filename,ios::in | ios::out);
  char InfoFile[100];
  FileLoader.getline(InfoFile,100,':');
  FileLoader.getline(InfoFile,100);
  strcpy(first_name,InfoFile);
  FileLoader.getline(InfoFile,100,':');
  FileLoader.getline(InfoFile,100);
  strcpy(last_name,InfoFile);
  FileLoader.getline(InfoFile,100,':');
  FileLoader.getline(InfoFile,100);
  strcpy(account_info,InfoFile);
  FileLoader.getline(InfoFile,100,':');
  FileLoader.getline(InfoFile,100);
  strcpy(password,InfoFile);
  FileLoader.getline(InfoFile,100,':');
  FileLoader.getline(InfoFile,100); 
  strcpy(username,InfoFile);
  
}

int User::LoginAccount(char Filename[] ,char checking[],char foundObj[])
{ 
if(this->first_name =="None")
{
  cout<<"need to load information before working";
  return 0;
}
else{
fstream TestFile(Filename,ios::in);
if(!TestFile)
{cout<<"Error in opening file..exiting now"<<endl;
 return 0;}
char filecheck[100];
TestFile.getline(filecheck,100);
while(!TestFile.eof())
{
   if(strstr(filecheck,checking)!=0)
      {char *smp;
       smp=strstr(filecheck,checking);
       cout<<"\n"<<foundObj<<" found: "<<smp<<endl;
       TestFile.close();
       return 1;
      }
   TestFile.getline(filecheck,100);
}
cout<<"Error: "<<foundObj<<" was not found!\n\nnow exiting..."<<endl;
TestFile.close();
}
return 0;
}


void User::ShowInfo()
{
   cout<<"\n"<<"First name: "<<first_name<<endl;
   cout<<"Last name: "<<last_name<<endl;
   cout<<"Password: "<<password<<endl;
   cout<<"Username: "<<username<<endl;
   cout<<"Account name: "<<account_info<<endl;
}
