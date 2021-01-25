#include "../Headers/houses.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void inputIs1(){
  int enteredPrice;
  int enteredHouseArea;
  int enteredFullArea;
  std::string basementText;
  int enteredHasBasementNumber;

  houses[housesAMT] = House(housesAMT);
  cout << "Enter area of the house (do not include garden, etc.) in m2: ";
  cin >> enteredHouseArea;
  checkInput();
  cout << "Enter full area(include gardern, surrounding area, etc.): ";
  cin >> enteredFullArea;
  checkInput();
  basement(enteredHasBasementNumber);
  houses[housesAMT].hasBasement = enteredHasBasementNumber;
  if(enteredHasBasementNumber = 1){
      basementText = " and with a basement ";
  }
  if(enteredHasBasementNumber = 0){
      basementText = " and without a basement ";
  }
     enteredPrice = enteredHouseArea * 2000 + (enteredFullArea - enteredHouseArea) * 700 + enteredHasBasementNumber * 50000;
  houses[housesAMT].setPrice(enteredPrice);
  if(continuePrice){
  cout << "A house with ID " << houses[housesAMT].id << ", price " << enteredPrice << basementText << " has been created." << endl << endl;
  }
  ofstream l;
  l.open("data/l");

  l << houses[housesAMT].id << endl << houses[housesAMT].price << endl << houses[housesAMT].hasBasement << endl << houses[housesAMT].available;
  l.close();

  housesAMT++;
  intro = 0;
  clearNStuff = 0;
  program();

}
void inputIs2(){
cout << "Amount of houses: " << housesAMT << endl;
  cout << "List of houses:" << endl;
  for(int i = 0; i < housesAMT; i++){

      cout << "     House " << houses[i].id << ": " << endl << "          availability: " <<houses[i].availableOrNot() << endl << "          price: " << houses[i].price << endl;
  }
  intro = 0;
  clearNStuff = 0;
  program();

}
void inputIs3(){
  int enteredid = 0;
  cout << "Enter ID of house to mark: ";
  cin >> enteredid;
 checkInput();

   if(enteredid < housesAMT){
      int availOrUnavail;
      cout << "1. Mark as available" << endl << "2. Mark as unavailable" << endl;
      cin >> availOrUnavail;
       checkInput();
      if(availOrUnavail == 1){
          houses[enteredid].makeAvailable();
          clearNStuff = 0;
          program();
      }
      if(availOrUnavail == 2){
          houses[enteredid].noMoreAvailable();
          intro = 0;
          clearNStuff = 0;
          program();
      }
  }

}
void inputIs4(){
  system("clear");
  intro = 0;
  clearNStuff = 0;
  program();

}
void inputIs5(){
  int enteredID, enteredPrice;
  cout << "ID of house to change price of: ";
  cin >> enteredID;
    checkInput();
  cout <<"New price: ";
  cin >> enteredPrice;
    if (!cin)
     checkInput();

 houses[enteredID].setPrice(enteredPrice);
 cout << "Price of house " << enteredID << " has been changed to " << enteredPrice << "." << endl << endl;
 intro = 0;
 clearNStuff = 0;
 program();

}
void inputIs7(){
  Account tempacc;
  tempacc.ressetpasswd();
}

void inputIs6(){
  std::string _input;
  cout << "Type 'login' to login." << endl << "Type 'passwd' to set the password." << endl;
  cin >> _input;
  if(_input == "login"){
    Account tempacc;
    tempacc.login();
} else if(_input == "passwd"){
inputIs7();

} else{
  cout << "Invalid input." << endl;
  inputIs6();

  }
}
