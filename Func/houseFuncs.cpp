#include "../Headers/houses.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

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
