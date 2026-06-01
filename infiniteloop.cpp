#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;

    while ( i <= num) { // enter num grater than 0 to see the infinite loop in action

        cout << i ; // Will print the value of i until it reaches num, but it will never reache num 'cause of commented line below

        // i++; ( This line is commented out, which creates an infinite loop 'cause i will never increase )

    }

    return 0;

} //To stop the infinite loop at terminal, use Ctrl + C (Windows) or Cmd + . (Mac) to interrupt the program.