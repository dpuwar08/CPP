#include <iostream>
using namespace std;

int main () {

    int n = 5;
    int max = INT_MIN;

    int num [5] { 5 , 55 , -44 , -85 , 83 };

    for ( int i = 0 ; i <= n - 1 ; i++ ) {

        if ( num [i] > max ) {

            max = num [i];

        }

    }

    cout << "maxima :" << max << endl;

    return 0;

}