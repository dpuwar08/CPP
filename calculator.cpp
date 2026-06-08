#include <iostream>
using namespace std;

int main() {

    int num1 , num2 ;

    cout << "Enter any two numbers: " ;
    cin >> num1 >> num2;

    char op;

    cout << endl;

    cout << "For numbers " << num1 << " and " << num2 << ", sum is: " << num1+num2 << endl;

    cout << endl;

    cout << "For numbers " << num1 << " and " << num2 << ", subtraction is: " << num1-num2 << endl;

    cout << endl;

    cout << "For numbers " << num1 << " and " << num2 << ", multiplication is: " << num1*num2 << endl;

    cout << endl;

    cout << "For numbers " << num1 << " and " << num2 << ", division is: " << (double) num1/num2 << endl;

    cout << endl;

    return 0;

}