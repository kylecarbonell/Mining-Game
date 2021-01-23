#include "Mining.hpp"

using namespace std;

void mining()
{
    int i;
    int tunnel;
    int usePick = 5;
    
    
    int decision;
    do
    {
        int tunnel;
        int i;
        cout << "Choose your tunnel" << endl;
        cout << "1. Gold Tunnel" << endl;
        cout << "2. Silver Tunnel" << endl;
        cout << "3. Crystal Tunnel" << endl;
        cout << "4. Backpack" << endl;
        cout << endl;
        cout << "0. Exit" <<endl;
        cin >> tunnel;
        cout << endl;
        system("cls");

        if (tunnel != 0 && energy <= 0)
        {
            system("cls");
            cout << "You do not have enough energy to mine!!" << endl;
            cout << "Take a break or eat some food" << endl;
            break;
        }
        else if (tunnel == 1 && energy > 0)
        {
            int decision;
            cout << "Would you like to enter tunnel 1?" << endl;
            cout << "(Please answer yes (1) or no (0)" << endl;
            cin >> decision;
            system("cls");

            if (decision == 1)
            {
                int mine;
                cout << "You see a shining piece on the rock walls" << endl;
                cout << "How many times would you like to strike it?" << endl;
                cout << "You have : " << energy << " left" << endl;
                cout << endl;

                cin >> usePick;

                if(usePick <= (energy / 10))
                {
                    cout << "You will strike " << usePick << " times." << endl;
                    cout << "This costs " << (usePick*10) << " energy" << endl;
                    cout << "Would you like to continue?" << endl;
                    cin >> mine;

                    if (mine == 1)
                    {
                        system("cls");
                        cout << "Mining..." << endl;
                        Sleep(1000);
                        srand(time(0));
                        for (i = 0; i <usePick; i++)
                        {
                            treasure = rand() % 9;

                            if (treasure == 0 || treasure == 3 || treasure == 6)
                            {
                                Sleep(500);
                                cout << "You found dirt" << endl;
                                cout << endl;
                                dirt++;

                            }
                            else if (treasure == 1 || treasure == 4 || treasure == 7)
                            {
                                Sleep (1000);
                                cout << "You found a nugget of gold!" << endl;
                                cout << endl;
                                goldNugget++;

                            }
                            else if (treasure == 2 || treasure == 5 || treasure == 9)
                            {
                                Sleep (1000);
                                cout << "It appears there is something hard inside this rock..." << endl;
                                Sleep (2000);
                                cout << "You found a pack of gold!" << endl;
                                cout << endl;
                                gold++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "What is this??" << endl;
                                Sleep(2000);
                                cout << "Its a diamond!!" <<endl;
                                cout << endl;
                                diamond++;
                            }
                        } 
                        energy = (energy - (usePick*10));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << dirt << " chunks of dirt." << endl;
                        cout << "You found : " << goldNugget << " pieces of gold nuggets." << endl;
                        cout << "You found : " << gold << " chunks of gold." << endl;

                        if (diamond > 0)
                        {
                            cout << "You found : " << diamond << " shiny diamonds" << endl;
                        } 
                    }
                } 
                else if (usePick > (energy / 10))
                {
                    system ("cls");
                    cout << "You do not have enough energy to strike this many times" << endl;
                    cout << "You have : " << energy << " or about " << (energy / 10) << " strikes" << endl;
                }
            }
        }
        else if (tunnel == 2 && energy > 0)
        {
            int decision;
            cout << "Would you like to enter tunnel 2?" << endl;
            cout << "(Please answer yes (1) or no (0)" << endl;
            cin >> decision;
            system("cls");

            if (decision == 1)
            {
                int mine;
                cout << "You see a shining piece on the rock walls" << endl;
                cout << "How many times would you like to strike it?" << endl;
                cout << "You have : " << energy << " left" << endl;
                cout << endl;

                cin >> usePick;

                if (usePick <= (energy / 10))
                {
                    cout << "You will strike " << usePick << " times." << endl;
                    cout << "This costs " << (usePick*10) << " energy" << endl;
                    cout << "Would you like to continue?" << endl;
                    cin >> mine;

                    if (mine == 1)
                    {
                        system("cls");
                        cout << "Mining..." << endl;
                        Sleep(1000);
                        srand(time(0));
                        for (i = 0; i <usePick; i++)
                        {
                            treasure = rand() % 7;

                            if (treasure == 0 || treasure == 3)
                            {
                                Sleep(500);
                                cout << "You found dirt" << endl;
                                cout << endl;
                                dirt++;

                            }
                            else if (treasure == 1 || treasure == 4)
                            {
                                Sleep (1000);
                                cout << "You found a nugget of silver!" << endl;
                                cout << endl;
                                silverNugget++;

                            }
                            else if (treasure == 2 || treasure == 5)
                            {
                                Sleep (1000);
                                cout << "It appears there is something hard inside this rock..." << endl;
                                Sleep (2000);
                                cout << "You found a pack of silver!" << endl;
                                cout << endl;
                                silver++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "What is this??" << endl;
                                Sleep(2000);
                                cout << "Its platinum!!" <<endl;
                                cout << endl;
                                platinum++;
                            }
                        } 
                        energy = (energy - (usePick*10));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << dirt << " chunks of dirt." << endl;
                        cout << "You found : " << silverNugget << " pieces of silver nuggets." << endl;
                        cout << "You found : " << silver << " chunks of silver." << endl;

                        if (platinum > 0)
                        {
                            cout << "You found : " << platinum << " shiny diamonds" << endl;
                        } 
                    }
                }
            }
        }
        else if (tunnel == 3 && energy > 0)
        {
            int decision;
            cout << "Would you like to enter tunnel 3?" << endl;
            cout << "(Please answer yes (1) or no (0)" << endl;
            cin >> decision;
            system("cls");

            if (decision == 1)
            {
                int mine;
                cout << "There are so many crystals all over the wall" << endl;
                cout << "How many times would you like to strike it?" << endl;
                cout << "You have : " << energy << " left" << endl;
                cout << endl;

                cin >> usePick;

                if (usePick <= (energy / 20))
                {
                    cout << "You will strike " << usePick << " times." << endl;
                    cout << "This costs " << (usePick*20) << " energy" << endl;
                    cout << "Would you like to continue?" << endl;
                    cin >> mine;

                    if (mine == 1)
                    {
                        system("cls");
                        cout << "Mining..." << endl;
                        Sleep(1000);
                        srand(time(0));
                        for (i = 0; i <usePick; i++)
                        {
                            treasure = rand() % 20;

                            if (treasure == 19 || treasure == 20)
                            {
                                Sleep(10000);
                                cout << "You found an Aer Vis Crystal" << endl;
                                cout << endl;
                                AVCrystal++;
                            }
                            else if (treasure == 18 || treasure == 21)
                            {
                                Sleep (5000);
                                cout << "You found a diamond!" << endl;
                                cout << endl;
                                diamond++;

                            }
                            else if (treasure == 17 || treasure == 22)
                            {
                                Sleep (5000);
                                cout << "You found Platinum" << endl;
                                platinum++;
                            }
                            else if(treasure == 23)
                            {
                                Sleep (10000);
                                cout << "Something red has shone out of the dirt" << endl;
                                Sleep(10000);
                                cout << "You found a ruby" << endl;
                                ruby++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "You found dirt" << endl;
                                dirt++;
                            }
                        } 
                        energy = (energy - (usePick*20));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << dirt << " chunks of dirt." << endl;
                        cout << "You found : " << AVCrystal << " pieces of Aer Vis Crystals." << endl;
                        cout << "You found : " << diamond << " shiny diamonds." << endl;
                        cout << "You found : " << platinum << " shiny Platinums." << endl;      

                        if (ruby > 0)
                        {
                            cout << "You found : " << ruby << " rubies" << endl;
                        } 
                    }
                }
            }
        }
        else if (tunnel == 0)
        {
            break;
        }
        else if (tunnel != 0)
        {
            cout << "Please choose a proper tunnel" << endl;
        }

        cout << "Click 0 to go back to the main menu" << endl;
        cout << "Click any number to exit the mines" << endl;

        cin >>  tunnel;
        if (tunnel != 0)
        {
            system("cls");
            break;
        }
    }while (tunnel != 10);
}

void checkBackpack()
{
    do
    {
        system("cls");
        cout << "-----------" << endl;
        cout << " Backpack" << endl;
        cout << "-----------" << endl;
        cout << endl;

        cout << "1. Inventory" << endl;
        cout << "2. Minishop" << endl;
        cout << endl;

        cin >> backpackMenu;

        if (backpackMenu == 1)
        {
            system("cls");
            inventory();

            cout << endl;
            cout << "Click 0 to go back to menu?" << endl;
            cin >> backpackMenu;
        }
    } while(backpackMenu != 0);
    system("cls");
}

void inventory()
{   
    do
    {
        system("cls");
        cout << "Inventory" << endl;
        cout << endl;
        cout << "1. Gold Mine Treasure" << endl;
        cout << "2. Silver Mine Treausre" << endl;
        cout << "3. Crystal Mine Treasure" << endl;

        cin >> treasureCheck;
        
        if (treasureCheck == 1)
        {
            system("cls");
            cout << "Dirt : " << dirt << endl;
            cout << "Gold Nuggets : " << goldNugget << endl;
            cout << "Gold : " << gold << endl;
        }
        else if (treasureCheck == 2)
        {
            system("cls");
            cout << "Dirt : " << dirt << endl;
            cout << "Silver Nuggets : " << silverNugget << endl;
            cout << "Silver : " << silver << endl;
        }
        else if (treasureCheck == 3)
        {
            system("cls");
            cout << "Aer Vis Crystals : " << AVCrystal << endl;
            cout << "Diamonds : " << diamond << endl;
            cout << "Platinum : " << platinum << endl;
        }

        cout << endl;
        cout << "Click 0 to go back to Inventory Menu" << endl;
        cin >> treasureCheckMenu;
    }while (treasureCheckMenu == 0);
}

int mainMenu()
{
    int menu;
    cout << "Welcome to the old west" << endl;
    cout << endl;
    cout << "1. Mine" << endl;
    cout << "2. Town" << endl;
    
    cin >> menu;
    cout << endl;

    return menu;
}

void shop()
{
    cout << "What would you like to do today?" << endl;
    cout << endl;
    cout << "1. Sell" << endl;
    cout << "2. Buy" << endl;

    cin >> shopMenu;

    if (shopMenu == 1)
    {
        cout << "This is your inventory" << endl;
        inventory();

        system("cls");

        cout << "What would you like to sell today?" << endl;
    }
}