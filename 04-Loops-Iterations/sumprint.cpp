#include <iostream>
using namespace std;

int main () {
   
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0 ; i <= num ; i++) {
        sum += i;
    
    }

    cout << "The sum of the numbers from 0 to " << num << " is: " << sum << endl;
    
    return 0;

}
