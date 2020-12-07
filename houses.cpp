#include <iostream>
#include <limits>
#include <unistd.h>

using namespace std;

bool clearNStuff = false;
void program();
void checkInput(){
 if (!cin)
 {
     clearNStuff = 1;
     program();


 }

}

int housesAMT = 0;
bool intro = false;
bool continuePrice;
class House {

 public:
    int id;
    int price;
    int houseArea;
    int fullArea;


    bool hasBasement;
    bool available = true;

    std::string availableOrNot();

    void setPrice(int i);
    void makeAvailable();
    void noMoreAvailable();
    int showID();
    House() {}
    House(int insertID){
    House::id = insertID;



}
};

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
 House houses[10];
  void basement(int &_enteredHasBasementNumber){
    std::string enteredHasBasement;
        cout << "Does it have a basement (y/n): ";
        cin >> enteredHasBasement;
        if(enteredHasBasement == "y" || enteredHasBasement == "1" || enteredHasBasement == "yes" || enteredHasBasement == "yeah"){
        _enteredHasBasementNumber = 1;
        }
        else if(enteredHasBasement == "n" || enteredHasBasement == "0" || enteredHasBasement == "no" || enteredHasBasement == "nah"){
        _enteredHasBasementNumber = 0;
        } else{
        cout << "not a valid answer (lmao u cant even answer a y/n question properly), u'll have to do the whole thing over again, because you're stupid. No, you won't get to just do the y/n again, shouldn't have been so incredibly dumb. Just, how, how is one this stupid. Just, ugh, bye I guess, or wait, no imma let you wait for 5 seconds too, haha." << endl;
        for(int s = 5; s > 0; s--){
            cout << s << endl;
            sleep(1);
        }
        program();
        }

        }


void program(){

if(clearNStuff){

      cin.clear();
  std::string ignoreLine;

  std::getline(cin, ignoreLine);
cout << "Invalid input.";
}
    int input = 0;
    if (intro){
    cout << "Options: " << endl;
    cout << "0. Show this list." << endl;
    cout << "1. Add house to list." << endl;
    cout << "2. List all houses." << endl;
    cout << "3. Mark a house as (un)available." << endl;
    cout << "4. Clear terminal." << endl;
    cout << "5. Change price of a house." << endl;
    }
    cout << "input(0 for help): ";
   cin >> input;
    checkInput();
        if (input == 0){
        intro = 1;
        clearNStuff = 0;
        program();

    }

if (input == 1){
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
        housesAMT++;
        intro = 0;
        clearNStuff = 0;
        program();

    }
    if (input == 2){
        cout << "List of houses:" << endl;
        for(int i = 0; i < housesAMT; i++){

            cout << "     House " << houses[i].id << ": " << endl << "          availability: " <<houses[i].availableOrNot() << endl << "          price: " << houses[i].price << endl;
        }
        intro = 0;
        clearNStuff = 0;
        program();
    }
    if (input == 3){
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

    if(input == 4){
        system("clear");
        intro = 0;
        clearNStuff = 0;
        program();
    }
    if(input == 5){
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
    else{
        cout << "Invalid input. Enter 0 for help." << endl;
        intro = 0;
        clearNStuff = 0;
        program();
    }
}



int main()
{
    program();

    return 0;

}