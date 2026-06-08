#include <iostream>
using namespace std;

int linearSerch () {

    int arr [] { 2 , 5 , -8 , 8 , 4 , -3 , 1 }; //Printing index of 8 !

    for ( int i = 0 ; i < 7 ; i++ ) {

        if ( arr [ i ] == 8 ) {

            return i;

        }

    }

    return -1;

}

int main () {

    cout << linearSerch () << endl;

    return 0;

}