#ifndef USER_H
#define USER_H


class User
{
private:
  char first_name[50];
  char last_name[50];
  char account_info[100];
  char password[100];
  char username[100];
public:
  User();
  void SetFname(char[]);
  void SetLname(char[]);
  void ChangePass(char[]);
  void ChangeUserN(char[]);
  void Setname(char[],char[]);  
  void SetUserPass(char[],char[]);
  void SetAll(char[],char[],char[],char[],char[]);
  void StartNfile();
  void GetFileInfo();
  void Delcont();
  void UpdateFile(char[]);
  void LoadInfoToCur(char[]);
  int LoginAccount(char[],char[],char[]);
  void ShowInfo();  
};

#endif
