#include <string>

using namespace std;
extern bool clearNStuff;
extern int housesAMT;
extern bool intro;
extern bool continuePrice;

 void program();
 void checkInput();
class Account{

public:

int monies = 0;

string name;
string passwd;
string secret_passwd;

void ressetpasswd();
void login();
};

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
