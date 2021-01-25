#include "../Headers/houses.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Account::login(){
  hash<string> hash_stringIn;
  ifstream readPasswd;

  int passwdRead;
  int hshdPsswd;
  std::string psswdInput;

  cout << "Enter password: ";
  cin >> psswdInput;
  hshdPsswd = hash_stringIn(psswdInput);
  readPasswd.open("password");
  readPasswd >> passwdRead;

  if(passwdRead == hshdPsswd){
    cout << "Login succeful." << endl;
    readPasswd.close();
    program();

  } else
        {
    cout << "Login unsucceful." << endl;
    readPasswd.close();
    inputIs6();
  }
}
  void Account::ressetpasswd(){
      ofstream passwdStorage;

    int secret_passwd_;
    std::string passwdCheck;

    cout << "Enter new password: ";
   cin >> passwd;
   cout << "Confirm new password: ";
   cin >> passwdCheck;

   if(passwdCheck == passwd){
      hash<string> hash_string;

      secret_passwd = passwd;
      secret_passwd_ = hash_string(passwd);
      passwdStorage.open("password");
      passwdStorage << secret_passwd_;
      passwdStorage.close();
      passwd = "";
      cout << "Setting password succeful" << endl;
      program();
  } else
        {
    cout << "Setting password unsucceful" << endl;
    program();
    }
  }
