#include <iostream>
using namespace std;

int main () {

    int n = 5;

    int min = INT_MAX;

    int num [n] { 5 , 24 , -15 , 16 , 77 };

    for ( int i = 0 ; i < n - 1 ; i++ ) {

        if ( min > num [i]) {

        min = num [i];

        }

    }

    cout << "Minima : " << min << endl;

    return 0;

}
