#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cout <<"Enter your num: ";
    cin >> num;

    for ( int i = 0 ; i <= num ; i++) {

        if( i % 2 != 0) {

            sum += i;

        }

    }

    cout << "The sum of all odd numbers upto " << num << " " << "is" << " " << sum << endl;

    return 0;

}
