#include <iostream>
using namespace std;

double mainOfTwo( double a , double b) {

    if ( a < b) {

    return a;

    } else {

    return b;

    }

}

int main () {

    cout << mainOfTwo (99.99999993 , 99.9992);

    return 0;

}
