#include <iostream>
#include <ctime>
#include <windows.h>
#include <tuple>
#include <fstream>


using namespace std;
/*
menu fix ups

-pickaxe maker // pickaxe to change sleep wait time

work on gambling 

make blacksmith to make items

make sell all function
*/


// file variables
int chooseFile;
string fileName;

int money;
int energy = 100;

//(id, name, amount, price)
tuple<int, string, int, int> dirt(0, "Dirt", 0, 1);
tuple<int, string, int, int> gold(4, "Gold", 0, 20);
tuple<int, string, int, int> goldNugget(2, "Gold Nuggets", 0, 10);
tuple<int, string, int, int> silver(3, "Silver", 0, 15);
tuple<int, string, int, int> silverNugget(1, "Silver Nugget", 0, 5);
tuple<int, string, int, int> AVCrystal(7, "Aer Vis Crystal", 0, 100);
tuple<int, string, int, int> Platinum(6, "Platinum", 0, 75);
tuple<int, string, int, int> diamond(5, "Diamond", 0, 50);
tuple<int, string, int, int> ruby(8, "Ruby", 0, 200);
tuple<int, string, int, int> CBar(5, "Chocolate Bar", 0, 5);
tuple<int, string, int, int> Salad(10, "Salad", 0, 10);
tuple<int, string, int, int> CNuggies(15, "Chicken Nuggets", 0, 20);
tuple<int, string, int, int> Sandwhich(20, "Ham Sandwhich", 0, 30);
tuple<int, string, int, int> BBox(50, "Bento Box", 0, 50);

tuple<int, string, bool, int> woodenPick(5000, "Wooden Pickaxe", 0, 0);
tuple<int, string, bool, int> stonePick(5000, "Stone Pickaxe", 0, 100);
tuple<int, string, bool, int> ironPick(2500, "Iron Pickaxe", 0, 300);

tuple<int, string, int, int> rabbitMeat(0, "Rabbit Meat", 0, 10);
tuple<int, string, int, int> pheasantMeat(0, "Pheasant Meat", 0, 30);
tuple<int, string, int, int> deerMeat(0, "Deer Meat", 0, 50);
tuple<int, string, int, int> bisonMeat(0, "Meat", 0, 100);

//void menu;
int mainMenu();
void mining();
void checkBackpack();

//town;
void town();
void shop();
int townOption;


//shop
int shopMenu;
int choice;
int moneyAdd;

void setPrices(int choice);
void selling(int product, int price, int choice);
void subtractItemCount(int choice, int sellQuantity);
void buy(int getBuy, int price, int itemAdd, string itemName);
void buyPrices(int choice);
void addItems(int buying, int choice, int product);

int sellQuantity;
int product;
int checkSell;
int price;
int decision;
int getBuy;
int itemAdd;
int buying;
string itemName;

//all mining
int treasure;
int sleepCount;
bool enterGold;
bool enterCrystal;

//backpack
int backToMenu;
int backpackMenu;

void inventory();
void itemVariables(int useItemChange);
void subtractItem(int useItemChange, int itemCount);
void usingItems(int item, int itemEnergy);

string pickaxeType;
int inventoryDecision;
int useItemChoice;
int itemCount;
int useItemChange;
int treasureCheckMenu;
int item;
int itemEnergy;

// hotel
void hotel();
void hotelVariables(int hotelStay);
int hotelStay;
int hotelEnergy;
int hotelCost;
int hotelStayLength;

//forest
int huntDecision;
int huntStation;
void hunt();
void cutWood();

