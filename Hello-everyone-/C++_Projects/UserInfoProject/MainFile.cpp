#include<iostream>
#include"User.h"
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
 char first_name[50];
 char last_name[50];
 char acc_info[50];
 char password[50];
 char username[50];
 int  passVar;
 int  userVar;
 char FileName[100];
 char Username[100];
 char Password[100];
 int choose;
 User CurUser;
 char contin;
 strcpy(Password,"Password");
 strcpy(Username,"Username");
 do{
 cout<<"\n\n\t\t\tMAIN MENU\n";
 cout<<"\tHello Please choose one of the following to get started..\t\t\n\n";
 cout<<"\t1) New User, Account Set up\n";
 cout<<"\t2) Existing user: Show content\n";
 cout<<"\t3) Existing user: Update content\n";
 cout<<"\t4) Existing user: Delete content\n";
 cout<<"\t5) Exit program\n\n\n";
 cin>>choose;

 switch(choose)
  { 
   case 1:{ 
             cout<<"Please enter your first name"<<endl;
             cin>>first_name;
             cout<<"Please enter you last name"<<endl;
             cin>>last_name;
             CurUser.StartNfile();
             cout<<"Please enter a username"<<endl;
             cin>>username;
             cout<<"Please enter a password"<<endl;
             cin>>password;
             cout<<"Please provide account name"<<endl;
             cin>>acc_info;
             CurUser.SetAll(first_name,last_name,acc_info,password,username);
             CurUser.StartNfile();
            break;
            }
   case 2:{
            cout<<"\n\nPlease input file name: "<<endl;
            cin>>FileName;
            fstream checkFile(FileName,ios::in);
            if(!checkFile)
              {
                cout<<"File name does not exist, please try again or create new account!"<<endl;
                break;
              }
            cout<<"Please enter Password and Username to verify account\n\n";
            cout<<"Please enter a username"<<endl;
            cin>>username;
            cout<<"\n\nPlease enter a password"<<endl;
            cin>>password;
            passVar=CurUser.LoginAccount(FileName,password,Password);
            userVar=CurUser.LoginAccount(FileName,username,Username);
            if((passVar+userVar)==2)
              {
                cout<<"Authentication was Successfull:\n\n";
                cout<<"Showing content: ";
                CurUser.LoadInfoToCur(FileName);
                CurUser.ShowInfo();
              }
            else
              {
                cout<<"Authentication was unsuccessfull:\n\n";
                cout<<"Now exiting program..."; 
                return 0;
              }
            break;
          }
   case 3:{
            cout<<"\n\nPlease input file name: "<<endl;
            cin>>FileName;
            fstream checkFile(FileName,ios::in | ios::out);
            if(!checkFile)
              {
                cout<<"File name does not exist, please try again or create new account!"<<endl;
                break;
              }
            cout<<"Please enter Password and Username to verify account\n\n";
            cout<<"Please enter a username"<<endl;
            cin>>username;
            cout<<"\n\nPlease enter a password"<<endl;
            cin>>password;
            passVar=CurUser.LoginAccount(FileName,password,Password);
            userVar=CurUser.LoginAccount(FileName,username,Username);
            if((passVar+userVar)==2)
              { 
                CurUser.LoadInfoToCur(FileName);
                cout<<"Authentication was Successfull:\n\n";
                cout<<"What would you like to update?\n";
                cout<<"1) First Name\n";
                cout<<"2) Last Name?\n";
                cout<<"3) Password?\n";
                cout<<"4) Username?\n";
                cout<<"5) First Name and Last Name?\n";
                cout<<"6) Password and Username?\n";
                cout<<"7) First Name,Last Name and Password?\n";
                cout<<"8) First Name,Last Name and Username?\n";
                cout<<"9) First Name,Last Name, Password and Username?\n\n";
                cin.ignore();
                cin>>choose;
                switch(choose)
                {
                 case 1:{cout<<"Enter first name...\n";
                         cin>>first_name;  
                         CurUser.SetFname(first_name); 
                         CurUser.UpdateFile(FileName);
                         break;}    
                 case 2:{cout<<"Enter last name...\n";
                         cin>>last_name; 
                         CurUser.SetLname(last_name); 
                         CurUser.UpdateFile(FileName);
                         break;}
                 case 3:{cout<<"Enter password...\n";
                         cin>>password;  
                         CurUser.ChangePass(password); 
                         CurUser.UpdateFile(FileName);
                         break;}
                 case 4:{cout<<"Enter username...\n";
                         cin>>username; 
                         CurUser.ChangeUserN(username);
                         CurUser.UpdateFile(FileName); 
                         break;}
                 case 5:{cout<<"Please input first name and last name...\n";
                         cin>>first_name>>last_name;
                         CurUser.Setname(first_name,last_name);
                         CurUser.UpdateFile(FileName);
                         break;}
                 case 6:{cout<<"Please enter password and username...\n";
                         cin>>password>>username;
                         CurUser.SetUserPass(username,password);
                         CurUser.UpdateFile(FileName);
                         break;}
                 case 7:{cout<<"Please input first name,last name and password...\n";
                         cin>>first_name>>last_name>>password;
                         CurUser.Setname(first_name,last_name);
                         CurUser.ChangePass(password); 
                         CurUser.UpdateFile(FileName);
                         break;}
                 case 8:{cout<<"Please input first name,last name and username...\n";
                         cin>>first_name>>last_name>>username; 
                         CurUser.Setname(first_name,last_name);
                         CurUser.ChangeUserN(username);
                         CurUser.UpdateFile(FileName); 
                         break;}
                 case 9:{cout<<"Please input first name,last name, password and username...\n";
                         cin>>first_name>>last_name>>password>>username; 
                         CurUser.SetAll(first_name,last_name,FileName,password,username);
                         CurUser.UpdateFile(FileName);
                         break;}
                 default:{cout<<"Selection invalid..please try again...";
                         break;}
                }
              }
            else
              {
                cout<<"Authentication was unsuccessfull:\n\n";
                cout<<"Now exiting program..."; 
                return 0;
              }
            break;
          }
   case 4:{
          cout<<"\n\nPlease input file name: "<<endl;
          cin>>FileName;
          CurUser.LoadInfoToCur(FileName);
          cout<<"Now Deleting content...\n";
          CurUser.Delcont();
          CurUser.UpdateFile(FileName);
            break;
          }
   case 5:{
           cout<<"Now exiting program...\n";
           return 0;
          }
   default:{
           cout<<"Please enter valid entry\n";             
           break;
           }
  }
  cout<<"Do you still wish to continue? Y or N? "<<endl;
  cin>>contin;
 }while(contin == 'y' || contin == 'Y');

return 0;
}
