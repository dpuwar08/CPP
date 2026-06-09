#include <iostream>
using namespace std;

int main () {

    int num;
    cout<<"Enter a number:";
    cin>>num;

    if ( num % 2 == 0 ) {
        
        cout<<num<<" is divisible by 2."<<endl;

    } else {

        cout<<num<<" is not divisible by 2."<<endl;

    }

    return 0;
    
}
