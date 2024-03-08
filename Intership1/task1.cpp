//Laiba Mazhar
//i22-1855
//Task 1
//FAST,NUCES,ISLAMABAD
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int laiba_rand = rand() % 100 + 1;
    int laiba_guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl<<endl;

    cout << "I have chosen a number between 1 and 100. Try to guess it." << endl<<endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> laiba_guess;
        attempts++;

        if (laiba_guess > laiba_rand) 
        {
            cout << "Too high! Try again." << endl;
        }
        else if (laiba_guess < laiba_rand)
        {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number " << laiba_rand << " correctly." << endl<<endl;

            cout << "Number of attempts: " << attempts << endl;
        }
    } while (laiba_guess != laiba_rand);

    return 0;
}
