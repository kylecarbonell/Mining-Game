#include <iostream>
#include <ctime>
#include <windows.h>
#include <tuple>

using namespace std;
/*
work on sleep function
-create pickaxe to change sleep wait time

fix up usage bug
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
int choice;
int money;
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
tuple<int, string, int, int> dirt(0, "Dirt", 0, 1);
int energy = 100;
int sleepCount;

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
void itemVariables(int useItemChange);
void subtractItem(int useItemChange, int itemCount);
void usingItems(int item, int usingItems);

int inventoryDecision;
int useItemChoice;
int itemCount;
int useItemChange;
int treasureCheckMenu;
int item;
int usingItem;

//energy items <energyadd, name, amount, price>
tuple<int, string, int, int> CBar(5, "Chocolate Bar", 0, 5);
tuple<int, string, int, int> Salad(10, "Salad", 0, 10);
tuple<int, string, int, int> CNuggies(15, "Chicken Nuggets", 0, 20);
tuple<int, string, int, int> Sandwhich(20, "Ham Sandwhich", 0, 30);
tuple<int, string, int, int> BBox(50, "Bento Box", 0, 50);


//Mining items <sleep, name, bool, price>
tuple<int, string, bool, int> stonePick(7500, "Stone Pickaxe", false, 150);
tuple<int, string, bool, int> ironPick(5000, "Stone Pickaxe", false, 300);