#include <iostream>
using namespace std;

int main () {

    int n = 5;

    int min = INT_MAX;
    int max =INT_MIN;
    int max_idx = -1;
    int min_idx = -1;

    int num [n] { 5 , 55 , -44 , 96 , -57 };

    for ( int i = 0 ; i <= n - 1 ; i++ ) {

        if ( max < num [i] ) {

            max = num [i];

            max_idx = i;

        }
        
        if ( min > num [i] ) {

            min = num [i];

            min_idx = i;

        }

    }

    cout << "index of maxima : " << max_idx << endl;
    cout << "index of minima : " << min_idx << endl;

    return 0;

}
