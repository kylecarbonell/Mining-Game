#include "Mining.cpp"

using namespace std;

int main()
{
    itemMaker();
    int play;
    do
    {
        int play = mainMenu();
            if (play == 1)
            {
                mining();
            }
            else if (play == 2)
            {
                shop();
            }
            else if (play == 3)
            {
                inventory();
            }
    }while (play != 0);
    cout << "Thanks for playing!" << endl;
}