#include <iostream>
using namespace std;

int main () {

    int age;
    cout <<"Please enter your age:";
    cin >> age;

    if( age >= 18) {

        cout << "You are eligible for license.\n";

    } else {

        cout << "You are not eligible for license.\n";

    }

    return 0;
    
}