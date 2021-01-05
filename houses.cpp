#include <iostream>
#include <limits>
#include <unistd.h>
#include <bits/stdc++.h>
#include "houses.h"

using namespace std;
bool clearNStuff;
int housesAMT;
bool intro;
bool continuePrice;




House houses[100];



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
        inputIs1();

    }
    else if (input == 2){
        inputIs2();
    }
    else if (input == 3){
      inputIs3();

    }

    else if(input == 4){
      inputIs4();
    }
    else if(input == 5){
      inputIs5();
    }
    else if(input == 6){
      inputIs6();

    }
    else if(input == 7){
        inputIs7();

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
   clearNStuff = false;
   housesAMT = 0;
   intro = false;
inputIs6();
    return 0;

}
