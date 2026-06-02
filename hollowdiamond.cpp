#include <iostream>
using namespace std;

int main () {

    int n = 4;

    for ( int i = 1 ; i <= n ; i++ ) {

        for ( int j = n - 1 ; j >= i ; j-- ) {

            cout << " ";

        }

        for ( int j = 1 ; j < 2 ; j++ ) {

            cout << "*";

        }

        for ( int j = 3 ; j <= i * 2 - 1 ; j++ ) {

            cout << " ";

        }

        if ( i != 1) {

            for ( int j = 1 ; j < 2 ; j++ ) {

                cout << "*";

            }

        }

        cout << endl;

    }

    for ( int i = 1 ; i <= n - 1 ; i++ ) {

        for ( int j = 2 ; j <= i + 1 ; j++ ) {

            cout << " ";

        }

        for ( int j = 2 ; j < 3 ; j++ ) {

            cout << "*";

        }

        for ( int j = 3; j >= i * 2 - 1 ; j-- ) {

            cout << " ";

        }

        if ( i != 3) {

            for ( int j = 2 ; j < 3 ; j++ ) {

                cout << "*";

            }
         
        }

        cout << endl; 

    }

    return 0;

}