#include <iostream>
using namespace std;

int main () {

    char Character;
    cout << "Enter a character: ";
    cin >> Character;

    if ( Character >= 'a' && Character <= 'z' ) {

        cout << "The character is a lowercase letter." << endl;

    } else if (Character >= 'A' && Character <= 'Z') {

        cout << "The character is an uppercase letter." << endl;

    } else if (Character >= '0' && Character <= '9') {

        cout << "The character is a digit." << endl;

    } else {

        cout << "The character is a special character." << endl;

    }

    return 0;

}