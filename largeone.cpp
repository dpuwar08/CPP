#include <iostream>
using namespace std;

int main() {

    int a , b;

    cout << "Enter the first number: "; 
    cin >> a;

    cout << "Enter the second number: "; 
    cin >> b; 

    if (a > b) {

        cout << a << " is the largest number." << endl; 

    } else if ( a < b) {

        cout << b << " is the largest number." << endl; 

    } else {

        cout << "Both numbers are equal." << endl; 

    }

    return 0;
    
}