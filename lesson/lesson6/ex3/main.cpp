#include <iostream>
#include "calculate.hpp"
// #include "add.hpp"

using namespace std;

#define COUNT 1000
#define NAME "Mike"
const int NUMBER = 100;

int main(){
    cout << add(COUNT,7) << endl;
    cout << multiply(6,48) << endl;
    cout << division(6,48) << endl;
    cout << difference(6,48) << endl;

    return 0;
}
