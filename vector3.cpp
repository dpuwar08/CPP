#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);

    cout<< "size of vec : " << vec.size() <<endl;

    vec.pop_back();

    cout<< "size of vec after pop back : " << vec.size() <<endl;

    cout<< "front value: " << vec.front() << endl;
    cout<< "back value: " << vec.back() << endl;

    cout <<"value at index 2 : " << vec.at(2) << endl;

    return 0 ;

}