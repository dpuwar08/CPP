#include <iostream>
using namespace std;

int main () {

    int n ;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { 
        cout << i << " ";  // for printing on the next line use endl instead of " ".
    }

    cout << endl;

    return 0;

}