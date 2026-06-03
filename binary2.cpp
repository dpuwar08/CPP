#include<iostream>
using namespace std;

int dec (int num) {

    int ans = 0;
    int power = 1;

    while (num > 0) {

        int rem = num % 10;

        num = num / 10;

        ans = ans + (rem * power);

        power = power * 2;

    }

    return ans ;

}

int main () {

    cout << dec (101010) << endl;

    return 0;

}