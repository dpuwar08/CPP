#include <iostream>
using namespace std;


bool isPrime(int num) {
    
    if (num <= 1) {
        return false; 
    }

    for (int i = 2; i < num; i++) {
        
        if (num % i == 0) {
            return false; 
        }
    }

    
    return true;
}

int main() {
    
    if (isPrime (25) ) {
        
        cout << "Prime Number." << endl;

    } else {
        
        cout << "Not a Prime Number." << endl;
    }

    return 0;
}