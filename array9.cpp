#include <iostream>
using namespace std;

int Multi( int arr[] , int sz) {

    int multi = 1;

    for ( int i = 0 ; i < sz ; i++ ) {

        multi = multi * arr [i] ;

    }

    return multi;

}

int main () {

    int sz = 7;

    int arr[] { 1 , 2 , 3 , 4 , 5 , 6 , 7 };

    cout << Multi (arr , sz) << endl;

    return 0;

}