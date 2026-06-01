#include <iostream>
using namespace std;

int main () {

    int n;

    cout <<"Question : How many stars you want in a single column?\n" << "Answer :";
    cin>>n;

    for ( int i = 0 ; i <= n ; i++) {

        cout << "* \n" ;

    }



    return 0;

}