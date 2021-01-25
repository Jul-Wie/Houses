#include "../Headers/houses.h"
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

using namespace std;

void checkInput(){
 if (!cin)
 {
     clearNStuff = 1;
     program();
   }
}

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
