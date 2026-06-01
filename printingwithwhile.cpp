#include <iostream>
using namespace std;

int main() {
   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 1;

    while (i <= num) {

        cout << i << " "; // for printing the numbers in other line, we use endl instead of " ".
        i++;

    }

    return 0;
}