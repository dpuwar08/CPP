#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num; 

    int sum = 0;
    int i = 1;

    while (i <= num) {

        sum += i;
        i++;
        // cout << "Current sum: " << sum << endl; ( This line will print the current sum after each addition. )

    }

    cout << "The sum of the first " << num << " numbers is: " << sum << endl;
    
    return 0;

}
