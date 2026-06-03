#include <iostream>
using namespace std;

int main () {

    int num;

    cout << " Enter a Num: ";
    cin >> num;

    while ( int i = 2) {

        if ( num % 2 == 0) {

            cout << "This number is a power of two.";

            break;

        } else {

            cout << "This number is not a power of two. ";

            break;

        }

    }

    return 0;

}