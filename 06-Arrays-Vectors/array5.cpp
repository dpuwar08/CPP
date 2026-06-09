#include <iostream>
using namespace std;

void Changearr ( int arr [] , int size) {

    for ( int i = 0 ; i < 3 ; i++ ) {

        arr [i] = arr [i] * 2 ;

    }

}

int main () {

    int arr [] { 1 , 2 , 3 };

    Changearr ( arr , 3 );

    for ( int i = 0 ; i < 3 ; i++ ) {

        cout << arr [i] << endl;

    }

    return 0;

}
