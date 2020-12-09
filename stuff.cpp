#include <houses.h>
#include <iostream>
using namespace std;

void checkInput(){
 if (!cin)
 {
     clearNStuff = 1;
     program();


 }

}



void Account::ressetpasswd(){
 cin >> passwd;
 secret_passwd = passwd;
 cout << secret_passwd << endl;
 hash<string> secret_passwd;
 cout << secret_passwd;
 passwd = "";
}
std::string House::availableOrNot(){
 if (House::available){
    return "Available";
 }
 if (!House::available){
    return "Not available";
 }


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