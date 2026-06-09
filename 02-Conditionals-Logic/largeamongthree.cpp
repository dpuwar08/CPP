#include <iostream>
using namespace std;

int main () {

    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if ( a > b && a > c) {

        cout << "The largest number is: " << a << endl;

    } else if ( b > a && b > c) {

        cout << "The largest number is: " << b << endl;

    } else if (c > a && c > b) {

        cout << "The largest number is: " << c << endl;

    } else if (a == b && a > c) {

        cout << "There are two equal and largest which are: " << a << " and " << b << endl;

    } else if (a == c && a > b) {

        cout << "There are two equal and largest which are: " << a << " and " << c << endl;

    } else if (b == c && b > a) {

        cout << "There are two equal and largest which are: " << b << " and " << c << endl;

    } else {

        cout << "All three numbers are equal." << endl;

    }

    return 0;

}
