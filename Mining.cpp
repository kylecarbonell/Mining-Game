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
                                get<2> (dirt)++;

                            }
                            else if (treasure == 1 || treasure == 4 || treasure == 7)
                            {
                                Sleep (1000);
                                cout << "You found a nugget of gold!" << endl;
                                cout << endl;
                                get<2>(goldNugget)++;

                            }
                            else if (treasure == 2 || treasure == 5 || treasure == 9)
                            {
                                Sleep (1000);
                                cout << "It appears there is something hard inside this rock..." << endl;
                                Sleep (2000);
                                cout << "You found a pack of gold!" << endl;
                                cout << endl;
                                get<2>(gold)++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "What is this??" << endl;
                                Sleep(2000);
                                cout << "Its a diamond!!" <<endl;
                                cout << endl;
                                get<2>(diamond)++;
                            }
                        } 
                        energy = (energy - (usePick*10));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << get<2>(dirt) << " chunks of dirt." << endl;
                        cout << "You found : " << get<2>(goldNugget) << " pieces of gold nuggets." << endl;
                        cout << "You found : " << get<2>(gold) << " chunks of gold." << endl;

                        if (get<2>(diamond) > 0)
                        {
                            cout << "You found : " << get<2>(diamond) << " shiny diamonds" << endl;
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
                                get<2>(dirt)++;

                            }
                            else if (treasure == 1 || treasure == 4)
                            {
                                Sleep (1000);
                                cout << "You found a nugget of silver!" << endl;
                                cout << endl;
                                get<2>(silverNugget)++;

                            }
                            else if (treasure == 2 || treasure == 5)
                            {
                                Sleep (1000);
                                cout << "It appears there is something hard inside this rock..." << endl;
                                Sleep (2000);
                                cout << "You found a pack of silver!" << endl;
                                cout << endl;
                                get<2>(silver)++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "What is this??" << endl;
                                Sleep(2000);
                                cout << "Its platinum!!" <<endl;
                                cout << endl;
                                get<2>(Platinum)++;
                            }
                        } 
                        energy = (energy - (usePick*10));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << get<2>(dirt) << " chunks of dirt." << endl;
                        cout << "You found : " << get<2>(silverNugget) << " pieces of silver nuggets." << endl;
                        cout << "You found : " << get<2>(silver) << " chunks of silver." << endl;

                        if (get<2>(Platinum) > 0)
                        {
                            cout << "You found : " << get<2>(Platinum) << " shiny diamonds" << endl;
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
                                get<2>(AVCrystal)++;
                            }
                            else if (treasure == 18 || treasure == 21)
                            {
                                Sleep (5000);
                                cout << "You found a diamond!" << endl;
                                cout << endl;
                                get<2>(diamond)++;

                            }
                            else if (treasure == 17 || treasure == 22)
                            {
                                Sleep (5000);
                                cout << "You found Platinum" << endl;
                                get<2>(Platinum)++;
                            }
                            else if(treasure == 23)
                            {
                                Sleep (10000);
                                cout << "Something red has shone out of the dirt" << endl;
                                Sleep(10000);
                                cout << "You found a ruby" << endl;
                                get<2>(ruby)++;
                            }
                            else 
                            {
                                Sleep(2000);
                                cout << "You found dirt" << endl;
                                get<2>(dirt)++;
                            }
                        } 
                        energy = (energy - (usePick*20));
                        cout << "You have : " << energy << " energy left" << endl;
                        cout << endl;

                        cout << "You found : " << get<2>(dirt) << " chunks of dirt." << endl;
                        cout << "You found : " << get<2>(AVCrystal) << " pieces of Aer Vis Crystals." << endl;
                        cout << "You found : " << get<2>(diamond) << " shiny diamonds." << endl;
                        cout << "You found : " << get<2>(Platinum) << " shiny Platinums." << endl;      

                        if (get<2>(ruby) > 0)
                        {
                            cout << "You found : " << get<2>(ruby) << " rubies" << endl;
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

        cout << "Click 0 to go back to the mining menu" << endl;
        cout << "Click 1 number to exit the mines" << endl;

        cin >>  tunnel;
        if (tunnel != 0)
        {
            system("cls");
            break;
        }
        system("cls");
    }while (tunnel != 0);
}

void inventory() //find bug
{   
    do
    {
        system("cls");
        cout << "Inventory" << endl;
        cout << endl;
        cout << "1. Gold Mine Treasure" << endl;
        cout << "2. Silver Mine Treausre" << endl;
        cout << "3. Crystal Mine Treasure" << endl;
        cout << endl;
        cout << "0. Exit" << endl;

        cin >> treasureCheck;
        cout << treasureCheck;
        
        if (treasureCheck == 1)
        {
            system("cls");
            cout << "Dirt : " << get<2>(dirt) << endl;
            cout << "Gold Nuggets : " << get<2>(goldNugget) << endl;
            cout << "Gold : " << get<2>(gold) << endl;
        }
        else if (treasureCheck == 2)
        {
            system("cls");
            cout << "Dirt : " << get<2>(dirt) << endl;
            cout << "Silver Nuggets : " << get<2>(silverNugget) << endl;
            cout << "Silver : " << get<2>(silver) << endl;
        }
        else if (treasureCheck == 3)
        {
            system("cls");
            cout << "Aer Vis Crystals : " << get<2>(AVCrystal) << endl;
            cout << "Diamonds : " << get<2>(diamond) << endl;
            cout << "Platinum : " << get<2>(Platinum) << endl;
        }
        else if (treasureCheck == 0)
        {
            break;
        }
        cout << "Click 0 to go back to the start menu" << endl;
        cout << "Click 1 to go back to the inventory menu" << endl;
        cin >> treasureCheck;
        system("cls");
    }while (treasureCheck != 0);
}

void treasureMenu()
{
    cout << "Basic Minerals" << endl;
    cout << "0. Dirt : $1" << endl;
    cout << "1. Silver Nuggets : $5" << endl;
    cout << "2. Gold Nuggets : $10" << endl;
    cout << "3. Silver : $15" << endl;
    cout << "4. Gold : 20$" << endl; 
    cout << endl;
    cout << "Crystal Minerals" << endl;
    cout << "5. Diamond : $50" << endl;
    cout << "6. Platinum : $75" << endl;
    cout << "7. Aer Vis Crystal : $100" << endl;
    cout << "8. Ruby : $200" << endl;
}

int mainMenu()
{
    int menu;
    cout << "Welcome to the old west" << endl;
    cout << endl;
    cout << "1. Mine" << endl;
    cout << "2. Town" << endl;
    cout << "3. Inventory" << endl;
    
    cin >> menu;
    cout << endl;
    system("cls");

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
        do
        {
            cout << "What would you like to sell today?" << endl;
            cout << endl;
            treasureMenu();

            cin >> sell;
            setPrices(sell);
            selling(sell, price);

            cout << "Would you like to sell anything else?" << endl;
            cin >> decision;
            system("cls");
        }while (decision == 0);

    }
}

void setPrices(int sell)
{
    if (sell == 0)
    {
        sellAmount = get<2>(dirt);
        price = get<3>(dirt);
    }
    else if (sell == 1)
    {
        sellAmount = get<2>(silverNugget);
        price = get<3>(silverNugget);
    }
    else if (sell == 2)
    {
        sellAmount = get<2>(goldNugget);
        price = get<3>(goldNugget);
    }
    else if(sell == 3)
    {
        sellAmount = get<2>(silver);
        price = get<3>(silver);
    }
    else if(sell == 4)
    {
        sellAmount = get<2>(gold);
        price = get<3>(gold);
    }
    else if (sell == 7)
    {
        sellAmount = get<2>(AVCrystal);
        price = get<3>(AVCrystal);
    }
    else if(sell == 5)
    {
        sellAmount = get<2>(diamond);
        price = get<3>(diamond);
    }
    else if(sell == 6)
    {
        sellAmount = get<2>(Platinum);
        price = get<3>(Platinum);
    }
    else if (sell == 8)
    {
        sellAmount = get<2>(ruby);
        price = get<3>(ruby);
    }
}

void selling(int sellAmount, int price)
{
    cout << "How much would you like to sell?" << endl;
    cin >> sellNum;

    product = (sellAmount - sellNum);
    cout << product << endl;
    if (product < 0)
    {
        cout << "You do not have enough of this item" << endl << "Get some more in the mines!" << endl;
        cout << money;
    }
    else if (product >= 0)
    {
        moneyAdd = product*price;
        money = money + moneyAdd;
        cout << "You have $" << money << endl;
    }
}