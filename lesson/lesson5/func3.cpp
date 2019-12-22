#include <iostream>
#include <typeinfo>
using namespace std;

int getValueFromUser(){
    cout << "Ведите целочисленое значение: ";
    int al = 0;
    cin >> al;
    return al;
}
int main(void) {
    int a = getValueFromUser();
    int b = getValueFromUser();

    cout << "a+b = " << a+b << endl;
    return 0;
}
