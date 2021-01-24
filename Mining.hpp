#include <iostream>
#include <ctime>
#include <windows.h>
#include <tuple>

using namespace std;

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

//all mining
int treasure;
tuple<int, string, int> dirt(0, "Dirt", 0);
int energy = 100;

//gold mine
tuple<int, string, int> gold(4, "Gold", 0);
tuple<int, string, int> goldNugget(2, "Gold Nuggets", 0);


//silver mine 
tuple<int, string, int> silver(3, "Silver", 0);
tuple<int, string, int> silverNugget(1, "Silver Nugget", 0);


//Crystal Mine
tuple<int, string, int> AVCrystal(7, "Aer Vis Crystal", 0);
tuple<int, string, int> Platinum(6, "Platinum", 0);
tuple<int, string, int> diamond(5, "Diamond", 0);
tuple<int, string, int> ruby(8, "Ruby", 0);


//backpack
int backToMenu;
int backpackMenu;
void inventory();
int treasureCheck;
int treasureCheckMenu;

//minerals <id, name, amount>

