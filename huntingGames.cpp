#include "huntingGames.hpp"
#include "Mining.hpp"

using namespace std;

void guessTheNumber()
{
    system("cls");
    srand(time(0));
    guessPuzzle = rand() % 6;

    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Which hole is the rabbit in?" << endl;
            cout << "Choose a number (0-5)" << endl;
            cin >> guess;

            if (guessPuzzle == guess)
            {
                system("cls");
                cout << "You have guessed the right hole!" << endl;

                do
                {
                srand(time(0));
                meatAdd = rand() % 4;
                }while (meatAdd == 0);

                cout << "You hunted " << meatAdd << " pieces of meat!" << endl;
                get<2> (rabbitMeat) = meatAdd + get<2>(rabbitMeat);
                cout << "You now have " << get<2>(rabbitMeat) << " pieces of meat total" << endl;
                gameFinished = true;
                break;
            }
            else 
            {
                system("cls");
                cout << "There is no rabbit in this hole" << endl <<  "Please guess again" << endl;
                cout << "You have " << 3-i << " tries left" << endl;
            }
            if (i == 3)
            {
                cout << "You have no more tries left" << endl;
                cout << "Would you like to try again?" << endl;
                cin >> decision;
                if (decision == 1)
                {
                    if (energy < 15)
                    {
                        noEnergy = true;
                        break;
                    }
                    energy = energy - 15;
                }
                else if (decision == 0)
                {
                    break;
                }
            }
        }
       
        if (gameFinished == true)
        {
            cout << "Would you like to hunt again?" << endl;
            cin >> decision;
            system("cls");
            if (decision == 1)
            {
                gameFinished = false;
            }
            else if(decision == 0)
            {
                break;
            }
        }
    }while(gameFinished == false);
    if (noEnergy == true)
    {
        cout << "You do not have enough energy to hunt!" << endl;
    }
}

