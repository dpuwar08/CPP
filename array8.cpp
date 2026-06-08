#include <iostream>
using namespace std;

int main () {

    int sz = 7;

    int sum = 0;

    int arr[] { 1 , 2 , 3 , 4 , 5 , 6 , 7 };

    for ( int i = 0 ; i < sz ; i++ ) {

        sum = sum + arr[i] ;

    }

    cout << sum << endl;

    return 0;

}
