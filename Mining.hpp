#include <iostream>
#include <ctime>
#include <windows.h>
#include <tuple>

using namespace std;
/*
-Work on stuff
-decision makings (0 and 1)
-fix some dialogue inside mining and inventory
-selling menu
-organize menu
-use real life examples
*/

//void menu;
int mainMenu();
void mining();
void checkBackpack();

//town;
void town();
void shop();


//shop
int shopMenu;
int sell;
int money;
int moneyAdd;
void setPrices(int sell);
void selling(int sellAmount, int price);
int sellNum;
int sellAmount;
int product;
int price;
int decision;

//all mining
int treasure;
tuple<int, string, int, int> dirt(0, "Dirt", 0, 1);
int energy = 100;

//gold mine
tuple<int, string, int, int> gold(4, "Gold", 0, 20);
tuple<int, string, int, int> goldNugget(2, "Gold Nuggets", 0, 10);


//silver mine 
tuple<int, string, int, int> silver(3, "Silver", 0, 15);
tuple<int, string, int, int> silverNugget(1, "Silver Nugget", 0, 5);


//Crystal Mine
tuple<int, string, int, int> AVCrystal(7, "Aer Vis Crystal", 0, 100);
tuple<int, string, int, int> Platinum(6, "Platinum", 0, 75);
tuple<int, string, int, int> diamond(5, "Diamond", 0, 50);
tuple<int, string, int, int> ruby(8, "Ruby", 0, 200);


//backpack
int backToMenu;
int backpackMenu;
void inventory();
int treasureCheck;
int treasureCheckMenu;

//Mining items
class Items
{
    private:
        string name;
        string type;
        int energyAdd;
        int price;
        int sleep;
        int durability; // do later

    public:
        void setName(string name)
        {
            this->name = name;
        }
        void setType(string type)
        {
            this->type = type;
        }
        void setEnergy(int energyAdd)
        {
            this->energyAdd = energyAdd;
        }
        void setPrice(int price)
        {
            this->price = price;
        }
        void setSleep(int sleep)
        {
            this->sleep = sleep;
        }

        string getName()
        {
            return name;
        }
        string getType()
        {
            return type;
        }
        int getEnergyAdd()
        {
            return energyAdd;
        }
        int getPrice()
        {
            return price;
        }
        int getSleep()
        {
            return sleep;
        }

};

void itemMaker()
{
    // Energy Restoration
    Items ChocolateBar;
    ChocolateBar.setName("Chocolate Bar");
    ChocolateBar.setType("Food");
    ChocolateBar.setEnergy(5);
    ChocolateBar.setPrice(5);

    Items BentoBox;
    BentoBox.setName("Bento Box");
    BentoBox.setType("Food");
    BentoBox.setEnergy(20);
    BentoBox.setPrice(30);
}