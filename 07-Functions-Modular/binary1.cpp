#include <iostream>
using namespace std;

int binary (int num) {

    int ans = 0;
    int power = 1;

    while ( num > 0 ) {

        int rem = num % 2 ;

        num = num / 2;

        ans = ans + (rem * power);

        power = power * 10;

    }

    return ans ;

}

int main () {

    int decnum;

    cout << "enter a number :";
    cin >> decnum;

    cout << binary (decnum) << endl;

    return 0;

}
