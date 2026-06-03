#include <iostream>
using namespace std;

int sumOfdig (int num) {

    int digsum = 0;

    while ( num > 0) {

    int lastdig = num % 10;

    num = num / 10;

    digsum += lastdig;

    }

    return digsum;

}

int main () {

    cout << sumOfdig (5555) << endl;

    return 0;

}