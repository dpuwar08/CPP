#include <iostream>
using namespace std;

int main () {

    int num;
    int i = 1;

    cout << "Enter your num: ";
    cin >> num;

    cout << "Odd numbers are: ";

    while (i <= num) { 

        if (i % 2 != 0) {

            cout << i << " ";

        }
        
        i++;
    }

    return 0;

}
