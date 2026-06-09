#include <iostream>
using namespace std;

void maxminswap ( int arr[] , int sz ) {

    int maxIdx = 0;
    int minIdx = 0;

    for ( int i = 1 ; i < sz ; i++ ) {

        if ( arr[i] > arr[maxIdx] ) {

            maxIdx = i; 

        }

        if ( arr[i] < arr[minIdx] ) {

            minIdx = i; 
            
        }

    }

    swap(arr[maxIdx], arr[minIdx]);

}

int main () {

    int sz = 6;

    int arr[] { 1 , -8 , 5 , 10 , 20 , 6 };

    maxminswap (arr , sz);

    for ( int i = 0 ; i < sz ; i++ ) {

        cout << arr[i] << " ";

    }

    cout << endl;

    return 0;

}
