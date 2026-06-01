#include <iostream>
using namespace std;

int main () {

    int percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if ( percentage >= 90 ) {

        cout <<"Your have got A+ grade." << endl;

    } else if (percentage < 90 && percentage >= 80) {

        cout <<"Your have got A grade." << endl;

    } else if (percentage < 80 && percentage >= 70) {

        cout <<"Your have got B+ grade." << endl;

    } else if (percentage < 70 && percentage >= 60) {

        cout <<"Your have got B grade." << endl;

    } else if (percentage < 60 && percentage >= 50) {

        cout <<"Your have got C+ grade." << endl;

    } else if (percentage < 50 && percentage >= 40) {

        cout <<"Your have got C grade." << endl;

    } else if (percentage < 40 && percentage >= 33) {

        cout <<"Your have got D grade." << endl;

    } else if (percentage < 33 && percentage >= 0) {

        cout <<"Your are failed better luck next time." << endl;

    } else {

        cout <<"Invalid input. Please enter a percentage between 0 and 100." << endl;

    }

    return 0;

}