#include <iostream>
using namespace std;

int main () {

    for ( char i = 'A'; i <= 'D' ; i++) {

        for ( char j = i; j >= 'A' ; j--) {

            cout << j << " ";

        }

     cout << endl;

    }

    return 0;

}
