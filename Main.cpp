#include "Mining.cpp"

using namespace std;

int main()
{
    loadFile();
    int play;
    do
    {
        system("cls");
        int play = mainMenu();
        system("cls");
            if (play == 1)
            {
                mining();
            }
            else if (play == 2)
            {
                cout << "Where would you like to go today?" << endl;
                cout << "1. Shopping District" << endl;
                cout << "2. Miner's Inn" << endl;
                cin >> townOption;
                system("cls");
                if (townOption == 1)
                {
                    shop();
                }
                else if (townOption == 2)
                {
                    hotel();
                }
            }
            else if(play == 3)
            {
                hunt();
            }
            else if (play == 4)
            {
                inventory();
            }
            else if (play == 0)
            {
                break;
            }
    }while (play != 0);
    saveFile();
}