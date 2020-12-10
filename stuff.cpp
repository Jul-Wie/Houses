#include "houses.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void checkInput(){
 if (!cin)
 {
     clearNStuff = 1;
     program();


 }

}


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
    program();
  }else{
    cout << "Login unsucceful." << endl;
    program();
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
 secret_passwd = passwd;
 hash<string> hash_string;
secret_passwd_ = hash_string(passwd);
passwdStorage.open("password");
passwdStorage << secret_passwd_;
passwdStorage.close();
 passwd = "";
 cout << "Setting password succeful" << endl;
program();
} else{
  cout << "Setting password unsucceful" << endl;
  program();
}
}
std::string House::availableOrNot(){
 if (House::available){
    return "Available";
 }
 if (!House::available){
    return "Not available";
 }
return " ";

}
void House::makeAvailable(){
    available = true;

}

void House::noMoreAvailable(){

available = false;

}
void House::setPrice(int i){
 if (i < 10000000 && i > 0){

price = i;
continuePrice = 1;
 } else{
 cout << "Too high / too low." << endl;
continuePrice = 0;
 }


}
