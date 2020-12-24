#include <iostream>

using namespace std;

int main()
{
    char character;
    cout << "Please enter one letter: ";
    cin >> character;

    if ((65 <= (int)character) && ((int)character <= 90))
    {
    cout << "The lower case of " << character << " is " << character + 32);
    }
    else if ((97 <= (int)character) && ((int)character <= 122))
    {
    cout << "The upper case of " << character << " is " << character - 32;
    }
    else
    {
    cout << character << " is not a letter";
    }

    return 0;
}
