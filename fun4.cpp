#include <iostream>
using namespace std;

int SumN(int N) {

    int Sum = 0;

    for ( int i = 1 ; i <= N ; i++ ) {

        Sum += i;

    }

    return Sum;

}

int main () {

    cout << SumN (5) <<endl; 

    cout << SumN (10) <<endl ;

    cout << SumN (15) <<endl;

    return 0;

}