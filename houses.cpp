#include <iostream>
#include <unistd.h>
#include <limits>
#include <bits/stdc++.h>
#include "Headers/houses.h"

using namespace std;
bool clearNStuff;
int housesAMT;
bool intro;
bool continuePrice;

House houses[100];

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
housesAMT = 0;
  ifstream l;
  l.open("data/l");
  if(l){
  int i;
  string s_line;
  int line;
  i = 0;
  while(getline(l, s_line)){
    line = stoi(s_line);
  if(i == 0){
    houses[housesAMT].id = line;
  }
  else if(i == 1){
    houses[housesAMT].price = line;
  }
  else if(i == 2){
    houses[housesAMT].hasBasement = line;
  }
  else if (i == 3){
    houses[housesAMT].available;
  }
  i++;

}
housesAMT++;

  cout << "Imported house with ID 0" << endl;
}
else{
  cout << "Didn't import any saved houses." << endl;
}

   clearNStuff = false;
   intro = false;
inputIs6();
    return 0;

}
