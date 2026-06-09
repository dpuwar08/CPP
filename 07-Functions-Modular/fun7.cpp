#include <iostream>
using namespace std;

int fact ( int n , int r ) {

    int fact1 = 1;
    int fact2 = 1;
    int fact3 = 1;
    
    int num = n - r;

    for ( int i = 1 ; i <= n ; i++ ) {

        fact1 = fact1 * i ;

    }

    for ( int i = 1 ; i <= r ; i++ ) {

        fact2 = fact2 * i ;

    }

    for ( int i = 1 ; i <= num ; i++ ) {  

        fact3 = fact3 * i ;

    }

    int fact = fact1 / (fact2 * fact3) ;

    return fact;

}

int main () {

    cout << fact( 6 , 2 ) <<endl;

    return 0;

}
