#include <iostream>
using namespace std;

int fact(int N) {

    int fact = 1;

    for ( int i = 1 ; i <= N ; i++ ) {

        fact *= i;

    }

    return fact;

}

int main () {

    cout << fact (5) <<endl; 

    cout << fact (7) <<endl ;

    cout << fact (10) <<endl;

    return 0;

}
