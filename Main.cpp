#include "Mining.cpp"

using namespace std;

int main()
{
    int play;
    do
    {
        int play = mainMenu();
        system("cls");
            if (play == 1)
            {
                mining();
            }
            else if (play == 3)
            {
                checkBackpack();
            }
    }while (play != 0);
    cout << "Thanks for playing!" << endl;
}