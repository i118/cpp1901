#include <iostream>
using namespace std;
int main(){
    int x = 1;
    switch(x){
        case 1:
            cout << "One\n";
            // break; // конец функции case
        case 3:
            cout << "Three\n";
            break;
        case 5:
            cout << "Five\n";
            break;
        default:
            cout << "smth\n";
    }
}

