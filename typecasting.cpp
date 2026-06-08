#include <iostream>
using namespace std;

int main () {

    double price = 100.999;
    double Price = 100.001;

    int val = (int) price;

    int value = (int) Price;

    cout << price << " value after type casting - " << val << endl;

    cout << Price << " value after type casting - " << value << endl;

    return 0;

}