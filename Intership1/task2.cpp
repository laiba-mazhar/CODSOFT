//Laiba Mazhar
//i22-1855
//Task 2
//FAST,NUCES,ISLAMABAD
#include <iostream>
using namespace std;

int main() 
{
    double laiba1;
    double laiba2;
    char laiba_ope;

    cout << "Please enter the first number: ";
    cin >> laiba1;
    cout << endl;
    cout << "Please enter the second number: ";
    cin >> laiba2;
    cout << endl;
    cout << "Please choose an operation (+, -, *, /): ";
    cin >> laiba_ope;
    cout << endl;
    switch (laiba_ope) 
    {
    case '+':
        cout << "Result: " << laiba1 + laiba2 << endl;
        break;
    case '-':
        cout << "Result: " << laiba1 - laiba2 << endl;
        break;
    case '*':
        cout << "Result: " << laiba1 * laiba2 << endl;
        break;
    case '/':
        if (laiba2 != 0) 
        {
            cout << "Result: " << laiba1 / laiba2 << endl;
        }
        else 
        {
            cout << "Dividing by 0 will lead to infinity" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
