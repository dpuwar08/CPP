#include <iostream>
using namespace std;

int main (){

    int length;

    cout << "Enter the length of rectangle:";
    cin >> length;

    int breadth;

    cout << "Enter the breadth of rectangle:";
    cin >> breadth;

    for ( int i = 1 ; i <= breadth ; i++){

        for ( int i = 1 ; i <= length ; i++){
        
            cout << "*" << " ";

    }

    cout << endl;

    }

    return 0;

}
