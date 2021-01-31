#include "Mining.hpp"

using namespace std;

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
            else if (decision == 0)
            {
                break;
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
            else if (decision == 0)
            {
                break;
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
                            treasure = rand() % 100;

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
            else if (decision == 0)
            {
                break;
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

void inventory() 
{   
    do
    {
        system("cls");
        cout << "Inventory" << endl;
        cout << endl;
        cout << "1. Mines" << endl;
        cout << "2. Items" << endl;
        cout << endl;
        cout << "0. Exit" << endl;

        cin >> inventoryDecision;
 
        
        if (inventoryDecision == 1)
        {
            system("cls");
            cout << "Dirt : " << get<2>(dirt) << endl;
            cout << "Gold Nuggets : " << get<2>(goldNugget) << endl;
            cout << "Gold : " << get<2>(gold) << endl;
            cout << "Silver Nuggets : " << get<2>(silverNugget) << endl;
            cout << "Silver : " << get<2>(silver) << endl;
            cout << "Aer Vis Crystals : " << get<2>(AVCrystal) << endl;
            cout << "Diamonds : " << get<2>(diamond) << endl;
            cout << "Platinum : " << get<2>(Platinum) << endl;
        }
        else if (inventoryDecision == 2)
        {

        }
        else if (inventoryDecision == 0)
        {
            break;
        }
        cout << "Click 0 to go back to the start menu" << endl;
        cout << "Click 1 to go back to the inventory menu" << endl;
        cin >> inventoryDecision;
        system("cls");
    }while (inventoryDecision != 0);
}

void treasureMenu()
{
    cout << "Basic Minerals" << endl;
    cout << "0. Dirt : $1" <<"              || " << get<2>(dirt) << endl;
    cout << "1. Silver Nuggets : $5" <<"    || " << get <2>(silverNugget) << endl;
    cout << "2. Gold Nuggets : $10" <<"     || " << get<2>(goldNugget) << endl;
    cout << "3. Silver : $15" <<"           || " << get<2>(silver)<< endl;
    cout << "4. Gold : 20$" <<"             || " << get<2>(gold)<< endl; 
    cout << "5. Diamond : $50" <<"          || " << get<2>(diamond)<< endl;
    cout << "6. Platinum : $75" <<"         || " << get<2>(Platinum) << endl;
    cout << "7. Aer Vis Crystal : $100" <<" || " << get<2>(AVCrystal) << endl;
    cout << "8. Ruby : $200" <<"            || " << get<2>(ruby) << endl;
}
void buyMenu()
{
    cout << "1. Chocolate Bar : $5" <<"              || " << get<2>(CBar) << " || Restores 5 energy" << endl;
    cout << "2. Salad : $10" <<"                     || " << get<2>(Salad) << " || Restores 10 energy" << endl;
    cout << "3. Chicken Nuggets : $20" <<"           || " << get<2>(CNuggies) << " || Restores 15 energy" << endl;
    cout << "4. Sandwhich : $30" <<"                 || " << get<2>(Sandwhich) << " || Restores 20 energy" << endl;
    cout << "5. Bento Box : $50" <<"                 || " << get<2>(BBox) << " || Restores 50 energy" << endl;
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
        system("cls");
        do
        {
            cout << "What would you like to sell today?" << endl;
            cout << endl;
            treasureMenu();

            cin >> choice;
            setPrices(choice);
            selling(product, price, choice);

            cout << "Would you like to sell anything else?" << endl;
            cin >> decision;
            system("cls");
        }while (decision != 0);
    }
    else if (shopMenu == 2)
    {
        system("cls");
        do
        {
            cout << "What would you like buy today?" << endl;
            cout << endl;
            buyMenu();

            cin >> choice;
            buyPrices(choice);
            buy(getBuy, price, itemAdd, itemName);

            cout << "Would you like to buy anything else?" << endl;
            cin >> decision;
            system("cls");
        }while (decision != 0);
    }
}

void setPrices(int choice)
{
    if (choice == 0)
    {
        product = get<2>(dirt);
        price = get<3>(dirt);
    }
    else if (choice == 1)
    {
        product = get<2>(silverNugget);
        price = get<3>(silverNugget);
    }
    else if (choice == 2)
    {
        product = get<2>(goldNugget);
        price = get<3>(goldNugget);
    }
    else if(choice == 3)
    {
        product = get<2>(silver);
        price = get<3>(silver);
    }
    else if(choice == 4)
    {
        product = get<2>(gold);
        price = get<3>(gold);
    }
    else if (choice == 7)
    {
        product = get<2>(AVCrystal);
        price = get<3>(AVCrystal);
    }
    else if(choice == 5)
    {
        product = get<2>(diamond);
        price = get<3>(diamond);
    }
    else if(choice == 6)
    {
        product = get<2>(Platinum);
        price = get<3>(Platinum);
    }
    else if (choice == 8)
    {
        product = get<2>(ruby);
        price = get<3>(ruby);
    }
}
void selling(int sellAmount, int price, int choice)
{
    cout << "How much would you like to sell?" << endl;
    cin >> sellQuantity;

    checkSell = (sellAmount - sellQuantity);
    if (product < 0)
    {
        cout << "You do not have enough of this item" << endl << "Get some more in the mines!" << endl;
        cout << money;
    }
    else if (product >= 0)
    {
        subtractItemCount(choice, sellQuantity);
        moneyAdd = sellQuantity*price;
        money += moneyAdd;
        cout << "You have $" << money << endl;
    }
}
void subtractItemCount(int choice, int sellQuantity)
{
    if (choice == 0)
    {
       get<2>(dirt) = get<2>(dirt) - sellQuantity;
    }
    else if (choice == 1)
    {
        get<2>(silverNugget) = get<2>(silverNugget) - sellQuantity;
    }
    else if (choice == 2)
    {
        get<2>(goldNugget) = get<2>(goldNugget) - sellQuantity;
    }
    else if(choice == 3)
    {
        get<2>(silver) = get<2>(silver) - sellQuantity;
    }
    else if(choice == 4)
    {
        get<2>(gold) = get<2>(gold) - sellQuantity;
    }
    else if (choice == 7)
    {
        get<2>(AVCrystal) = get<2>(AVCrystal) - sellQuantity;
    }
    else if(choice == 5)
    {
        get<2>(diamond) = get<2>(diamond) - sellQuantity;
    }
    else if(choice == 6)
    {
        get<2>(Platinum) = get<2>(Platinum) - sellQuantity;
    }
    else if (choice == 8)
    {
        get<2>(ruby) = get<2>(ruby) - sellQuantity;
    }
}

void buyPrices(int choice)
{
    if (choice == 1)
    {
        getBuy = get<3>(CBar);
        price = get<0>(CBar);
        itemAdd = get<2>(CBar);
        itemName = get<2>(CBar);
    }
    else if (choice == 5)
    {
        getBuy = get<3>(BBox);
        price = get<0>(BBox);
        itemAdd = get<2>(BBox);
        itemName = get<2>(BBox);
    }
    else if (choice == 4)
    {
        getBuy = get<3>(Sandwhich);
        price = get<0>(Sandwhich);
        itemAdd = get<2>(Sandwhich);
        itemName = get<2>(Sandwhich);
    }
    else if (choice == 2)
    {
        getBuy = get<3>(Salad);
        price = get<0>(Salad);
        itemAdd = get<2>(Salad);
        itemName = get<2>(Salad);
    }
    else if (choice == 3)
    {
        getBuy = get<3>(CNuggies);
        price = get<0>(CNuggies);
        itemAdd = get<2>(CNuggies);
        itemName = get<2>(CNuggies);
    }
}
void buy(int getBuy, int price, int itemAdd, string itemName)
{
    cout << "How much would you like to buy?" << endl;
    cin >> buying;

    product = buying*price;
    if (product > money)
    {
        cout << "You do not have enough money to buy these items" << endl;
    }
    else if (product >= money)
    {
        money = money - product;
        cout << "Thank you for shopping!" << endl;

        itemAdd += buying;
        cout << "You now have " << buying <<  " " << itemName << endl;
        cout << get<2>(CBar);
        cout << get<2>(BBox);
    }
}

void useItem