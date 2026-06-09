#include <iostream>
using namespace std;

int main (){

    int num;
    int sum = 0;

    cout << "Enter your num:";
    cin >> num;

    for (int i = 1 ; i <= num ; i++){

        if ( i % 3 == 0 ){

            sum += i;

        }

    }

    cout <<"sum is :" << sum << endl;

    return 0;

}
